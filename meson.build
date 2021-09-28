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

inc = include_directories('include')
inc_ext = include_directories('include/external')

# fmt = dependency('fmt')
# spdlog = dependency('spdlog')

sources = [
  'src/main.cpp',
  'src/config.cpp',
  'src/log.cpp',
]
exe = executable(
  'MyApp', sources,
  cpp_pch : ['pch/pch.hpp', 'pch/pch.cpp'],
  include_directories : [inc, inc_ext],
  # dependencies : [fmt,spdlog],
  # link_with : openssl,
  # install : true,
)

test_sources = [
  'tests/main.cpp',
  'tests/factorial.cpp',
]
test = executable('MyAppTest', test_sources)
test('Catch2 tests', test)

# Copy binary, config and dynamic libs to app/bin
