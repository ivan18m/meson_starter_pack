project(
  'MyApp', 
  'cpp',
  version : '0.1',
  meson_version: '>=0.56',
  license : 'MIT',
  default_options : [
    'warning_level=2',
    'c_std=c18', 'cpp_std=c++17',
    'buildtype=release',
  ]
)

# Compiler settings
compiler_flags = [
	'-Wno-unused-parameter',
	'-fvisibility=hidden',
]
cpp_c = meson.get_compiler('cpp')
add_project_arguments(
	cpp_c.get_supported_arguments(compiler_flags),
	language: 'cpp'
)

# Location to .h .hpp .hh headers
inc = include_directories('include')
inc_ext = include_directories('include/external')

# Libraries
# fmt = dependency('fmt')
# spdlog = dependency('spdlog')

# cpp files for binary/executable
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

# subdirs
subdir('tests')
subdir('docs')

# TODO: Copy binary, config and dynamic libs to app/bin
