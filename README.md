Ever wanted to embed text in an image, which is readable both by humans and by
computers?

tinytext is a bitmap font with a very small point size (most characters are 3x5
pixels). The font contains unambiguous representations of a wide variety of
characters, and comes with a search tree optimized for identifying these
characters in existing graphics. It provides its data in formats friendly to
C/C++, Lua, and anything that can parse JSON.

License
=======

tinytext is dual-licensed. You may, at your sole discretion, use either the MIT
license or GPLv3. The full text of both licenses is included in `LICENSE.md`
in this source distribution.

Supported Characters
====================

Characters outside ASCII are not supported.

* Every uppercase letter
* Lowercase letter "x"
* Every numeral
* Punctuation: Period, comma, colon, exclamation point, question mark
* Math: Plus, minus, equals, slash (often used for division), number sign
* Misc: Backslash, parentheses, square brackets, curly braces, pipe, underscore
* `ABCDEFGHIJKLMNOPQRSTUVWXYZx0123456789.,:!?+-=/#\()[]{}|_`

The "mixed" version supports all the above characters, as well as lowercase
letters.

Currently unsupported by either version:

* Single and double quote
* Dollar sign
* Ampersand
* Asterisk
* Percent sign
* Semicolon
* Angle brackets
* Caret
* Grave (backtick)
* Tilde
* ``"$%&'*;<>^`~``

Important Files
===============

* `tinytext.png`: Contains the pixel data for the font, in graphical form.
C/C++ applications may find it simpler to use the header file.
* `tinytext.pixels.h`: Contains the pixel data for the font, in the form of a
not-very-efficient but quite simple C structure.
* `tinytext.data.(h|json|lua)`: Contains records for each supported character,
giving the location and dimensions of its graphical representation. Used for
recognition confirmation, and for rendering.
* `tinytext.decoder.(h|json|lua)`: Contains the decoder tree for each supported
character.
* `tinytext_mixed.*`: Same as above, but contains additional support for
lowercase letters.

Decoding
========

Each non-leaf node of the decoder tree is a pixel offset to test: follow the
`t` link if there _is_ "ink" at that pixel, follow the `f` link if there
_isn't_. Each leaf node is a candidate character. You should use the font data
to confirm that the candidate actually matches; the decoder tree doesn't
determine that a particular character _is_ there, only that it's the only
supported character that _could_ be there.

