#include <iostream>

extern "C" {
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libswscale/swscale.h>
}

int main(int argc, char *argv[]) {
  if (argc != 2) {
      return -1;
  }

  AVFormatContext *context = avformat_alloc_context();
  avformat_open_input(&context, argv[1], NULL, NULL);
  std::cout << "Format " << context->iformat->long_name << '\n';
  std::cout << "duration" << context->duration;
}
