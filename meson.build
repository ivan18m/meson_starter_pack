project('meson-test', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3',
                     'cpp_std=c++17'])

exe = executable('meson_test', 'meson_test.cpp',
  install : true)

test('basic', exe)
