project('video player', 'cpp')

ffmpeg_deps = [
  dependency('libavcodec'),
  dependency('libavformat'),
  dependency('libswscale'),
  dependency('libavutil')
  ]


inc = include_directories('include')

executable('player',
  'src/main.cpp',
  'src/decoder.cpp',
  include_directories: inc,
  dependencies: ffmpeg_deps
)
