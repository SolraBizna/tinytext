struct tinytext_mixed_decoder_node {
  char c; // if non-zero, terminate decoding and guess this char
  // otherwise, test the pixel given by x,y and descend according to the result
  short x, y;
  const struct tinytext_mixed_decoder_node* t, *f;
};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_tttt = {'M',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_tttf = {'#',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ttt = {0,4,0,&tinytext_mixed_decoder_tttt,&tinytext_mixed_decoder_tttf};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ttftttt = {'B',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ttftttf = {'D',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ttfttt = {0,1,2,&tinytext_mixed_decoder_ttftttt,&tinytext_mixed_decoder_ttftttf};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ttfttf = {'0',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ttftt = {0,0,0,&tinytext_mixed_decoder_ttfttt,&tinytext_mixed_decoder_ttfttf};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ttftftt = {'R',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ttftftf = {'P',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ttftft = {0,2,3,&tinytext_mixed_decoder_ttftftt,&tinytext_mixed_decoder_ttftftf};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ttftff = {'A',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ttftf = {0,0,0,&tinytext_mixed_decoder_ttftft,&tinytext_mixed_decoder_ttftff};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ttft = {0,1,4,&tinytext_mixed_decoder_ttftt,&tinytext_mixed_decoder_ttftf};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ttffttt = {'g',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ttffttf = {'9',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ttfftt = {0,2,0,&tinytext_mixed_decoder_ttffttt,&tinytext_mixed_decoder_ttffttf};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ttfftft = {'3',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ttfftff = {'8',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ttfftf = {0,0,0,&tinytext_mixed_decoder_ttfftft,&tinytext_mixed_decoder_ttfftff};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ttfft = {0,2,2,&tinytext_mixed_decoder_ttfftt,&tinytext_mixed_decoder_ttfftf};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ttffftt = {'Z',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ttffftf = {'2',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ttffft = {0,2,0,&tinytext_mixed_decoder_ttffftt,&tinytext_mixed_decoder_ttffftf};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ttfffft = {'7',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ttfffff = {'?',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ttffff = {0,1,3,&tinytext_mixed_decoder_ttfffft,&tinytext_mixed_decoder_ttfffff};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ttfff = {0,0,3,&tinytext_mixed_decoder_ttffft,&tinytext_mixed_decoder_ttffff};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ttff = {0,2,3,&tinytext_mixed_decoder_ttfft,&tinytext_mixed_decoder_ttfff};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ttf = {0,0,2,&tinytext_mixed_decoder_ttft,&tinytext_mixed_decoder_ttff};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_tt = {0,3,0,&tinytext_mixed_decoder_ttt,&tinytext_mixed_decoder_ttf};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_tfttt = {'Q',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_tfttf = {'O',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_tftt = {0,2,3,&tinytext_mixed_decoder_tfttt,&tinytext_mixed_decoder_tfttf};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_tftftt = {'E',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_tftftft = {'G',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_tftftff = {'C',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_tftftf = {0,2,2,&tinytext_mixed_decoder_tftftft,&tinytext_mixed_decoder_tftftff};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_tftft = {0,0,0,&tinytext_mixed_decoder_tftftt,&tinytext_mixed_decoder_tftftf};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_tftfft = {'I',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_tftffft = {'1',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_tftffff = {'{',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_tftfff = {0,0,1,&tinytext_mixed_decoder_tftffft,&tinytext_mixed_decoder_tftffff};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_tftff = {0,0,0,&tinytext_mixed_decoder_tftfft,&tinytext_mixed_decoder_tftfff};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_tftf = {0,0,3,&tinytext_mixed_decoder_tftft,&tinytext_mixed_decoder_tftff};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_tft = {0,3,1,&tinytext_mixed_decoder_tftt,&tinytext_mixed_decoder_tftf};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_tfftttt = {'F',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_tfftttf = {'5',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_tffttt = {0,0,3,&tinytext_mixed_decoder_tfftttt,&tinytext_mixed_decoder_tfftttf};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_tffttf = {'T',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_tfftt = {0,0,1,&tinytext_mixed_decoder_tffttt,&tinytext_mixed_decoder_tffttf};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_tfftft = {'f',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_tfftff = {'S',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_tfftf = {0,0,2,&tinytext_mixed_decoder_tfftft,&tinytext_mixed_decoder_tfftff};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_tfft = {0,0,0,&tinytext_mixed_decoder_tfftt,&tinytext_mixed_decoder_tfftf};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_tffft = {'}',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_tfffft = {'6',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_tffffftt = {'[',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_tffffftf = {']',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_tffffft = {0,0,1,&tinytext_mixed_decoder_tffffftt,&tinytext_mixed_decoder_tffffftf};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_tffffff = {'(',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_tfffff = {0,0,0,&tinytext_mixed_decoder_tffffft,&tinytext_mixed_decoder_tffffff};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_tffff = {0,2,3,&tinytext_mixed_decoder_tfffft,&tinytext_mixed_decoder_tfffff};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_tfff = {0,2,2,&tinytext_mixed_decoder_tffft,&tinytext_mixed_decoder_tffff};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_tff = {0,2,0,&tinytext_mixed_decoder_tfft,&tinytext_mixed_decoder_tfff};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_tf = {0,2,4,&tinytext_mixed_decoder_tft,&tinytext_mixed_decoder_tff};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_t = {0,2,1,&tinytext_mixed_decoder_tt,&tinytext_mixed_decoder_tf};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_fttttt = {'e',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_fttttf = {'z',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ftttt = {0,0,3,&tinytext_mixed_decoder_fttttt,&tinytext_mixed_decoder_fttttf};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ftttft = {'a',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ftttfft = {'d',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ftttfff = {'c',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ftttff = {0,2,0,&tinytext_mixed_decoder_ftttfft,&tinytext_mixed_decoder_ftttfff};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ftttf = {0,1,1,&tinytext_mixed_decoder_ftttft,&tinytext_mixed_decoder_ftttff};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_fttt = {0,0,2,&tinytext_mixed_decoder_ftttt,&tinytext_mixed_decoder_ftttf};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_fttftt = {'H',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_fttftf = {'4',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_fttft = {0,0,3,&tinytext_mixed_decoder_fttftt,&tinytext_mixed_decoder_fttftf};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_fttfft = {'r',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_fttffft = {'+',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_fttffff = {'-',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_fttfff = {0,1,1,&tinytext_mixed_decoder_fttffft,&tinytext_mixed_decoder_fttffff};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_fttff = {0,0,3,&tinytext_mixed_decoder_fttfft,&tinytext_mixed_decoder_fttfff};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_fttf = {0,0,0,&tinytext_mixed_decoder_fttft,&tinytext_mixed_decoder_fttff};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ftt = {0,1,4,&tinytext_mixed_decoder_fttt,&tinytext_mixed_decoder_fttf};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ftftttt = {'K',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ftftttf = {'k',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ftfttt = {0,2,0,&tinytext_mixed_decoder_ftftttt,&tinytext_mixed_decoder_ftftttf};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ftfttf = {'X',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ftftt = {0,0,2,&tinytext_mixed_decoder_ftfttt,&tinytext_mixed_decoder_ftfttf};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ftftftt = {'h',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ftftftf = {'n',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ftftft = {0,0,0,&tinytext_mixed_decoder_ftftftt,&tinytext_mixed_decoder_ftftftf};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ftftfft = {'t',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ftftfff = {'\\',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ftftff = {0,0,2,&tinytext_mixed_decoder_ftftfft,&tinytext_mixed_decoder_ftftfff};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ftftf = {0,0,4,&tinytext_mixed_decoder_ftftft,&tinytext_mixed_decoder_ftftff};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ftft = {0,2,1,&tinytext_mixed_decoder_ftftt,&tinytext_mixed_decoder_ftftf};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ftfftt = {'m',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ftfftft = {'b',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ftfftff = {'o',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ftfftf = {0,0,0,&tinytext_mixed_decoder_ftfftft,&tinytext_mixed_decoder_ftfftff};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ftfft = {0,3,2,&tinytext_mixed_decoder_ftfftt,&tinytext_mixed_decoder_ftfftf};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ftffftt = {'Y',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ftffftf = {'/',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ftffft = {0,0,0,&tinytext_mixed_decoder_ftffftt,&tinytext_mixed_decoder_ftffftf};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ftffff = {')',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ftfff = {0,2,0,&tinytext_mixed_decoder_ftffft,&tinytext_mixed_decoder_ftffff};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ftff = {0,2,3,&tinytext_mixed_decoder_ftfft,&tinytext_mixed_decoder_ftfff};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ftf = {0,2,4,&tinytext_mixed_decoder_ftft,&tinytext_mixed_decoder_ftff};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ft = {0,2,2,&tinytext_mixed_decoder_ftt,&tinytext_mixed_decoder_ftf};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_fftttt = {'W',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_fftttf = {'w',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ffttt = {0,4,0,&tinytext_mixed_decoder_fftttt,&tinytext_mixed_decoder_fftttf};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ffttftt = {'V',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ffttftft = {'u',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ffttftff = {'v',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ffttftf = {0,2,4,&tinytext_mixed_decoder_ffttftft,&tinytext_mixed_decoder_ffttftff};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ffttft = {0,0,0,&tinytext_mixed_decoder_ffttftt,&tinytext_mixed_decoder_ffttftf};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ffttfft = {'J',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ffttfff = {'j',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ffttff = {0,2,1,&tinytext_mixed_decoder_ffttfft,&tinytext_mixed_decoder_ffttfff};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ffttf = {0,0,2,&tinytext_mixed_decoder_ffttft,&tinytext_mixed_decoder_ffttff};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_fftt = {0,3,4,&tinytext_mixed_decoder_ffttt,&tinytext_mixed_decoder_ffttf};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_fftftt = {'U',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_fftftf = {'L',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_fftft = {0,3,0,&tinytext_mixed_decoder_fftftt,&tinytext_mixed_decoder_fftftf};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_fftfft = {'s',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_fftfff = {'l',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_fftff = {0,2,1,&tinytext_mixed_decoder_fftfft,&tinytext_mixed_decoder_fftfff};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_fftf = {0,2,4,&tinytext_mixed_decoder_fftft,&tinytext_mixed_decoder_fftff};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_fft = {0,2,2,&tinytext_mixed_decoder_fftt,&tinytext_mixed_decoder_fftf};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ffftttt = {'y',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ffftttf = {'=',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_fffttt = {0,0,2,&tinytext_mixed_decoder_ffftttt,&tinytext_mixed_decoder_ffftttf};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_fffttf = {'q',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ffftt = {0,0,1,&tinytext_mixed_decoder_fffttt,&tinytext_mixed_decoder_fffttf};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ffftftt = {'p',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ffftftf = {'x',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ffftft = {0,0,1,&tinytext_mixed_decoder_ffftftt,&tinytext_mixed_decoder_ffftftf};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ffftff = {',',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ffftf = {0,2,2,&tinytext_mixed_decoder_ffftft,&tinytext_mixed_decoder_ffftff};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ffft = {0,2,1,&tinytext_mixed_decoder_ffftt,&tinytext_mixed_decoder_ffftf};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_fffft = {'N',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ffffftt = {'|',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ffffftf = {'!',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ffffft = {0,0,3,&tinytext_mixed_decoder_ffffftt,&tinytext_mixed_decoder_ffffftf};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_fffffftt = {'i',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_fffffftf = {':',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_fffffft = {0,0,4,&tinytext_mixed_decoder_fffffftt,&tinytext_mixed_decoder_fffffftf};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_fffffff = {'.',0,0,NULL,NULL};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ffffff = {0,0,1,&tinytext_mixed_decoder_fffffft,&tinytext_mixed_decoder_fffffff};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_fffff = {0,0,0,&tinytext_mixed_decoder_ffffft,&tinytext_mixed_decoder_ffffff};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ffff = {0,1,1,&tinytext_mixed_decoder_fffft,&tinytext_mixed_decoder_fffff};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_fff = {0,1,3,&tinytext_mixed_decoder_ffft,&tinytext_mixed_decoder_ffff};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_ff = {0,1,4,&tinytext_mixed_decoder_fft,&tinytext_mixed_decoder_fff};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_f = {0,1,2,&tinytext_mixed_decoder_ft,&tinytext_mixed_decoder_ff};
static const struct tinytext_mixed_decoder_node tinytext_mixed_decoder_root = {0,1,0,&tinytext_mixed_decoder_t,&tinytext_mixed_decoder_f};
