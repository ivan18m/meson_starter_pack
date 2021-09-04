project(
  'meson-test', 
  'cpp',
  version : '0.1',
  meson_version: '>=0.50',
  license : 'MIT',
  default_options : [
                      'warning_level=3',
                      'c_std=c18',
                      'cpp_std=c++17',
                    ]
)

exe = executable('meson_test', 'meson_test.cpp',
  install : true)

test('basic', exe)
