project(
  'MyApp', 
  'cpp',
  version : '0.1.1',
  meson_version: '>=0.56',
  license : 'MIT',
  default_options : [
    'warning_level=2',
    'c_std=c18', 'cpp_std=c++17',
    'buildtype=release',
  ]
)
# Variables
version_arr = meson.project_version().split('.')
version_major = version_arr[0].to_int()
version_minor = version_arr[1].to_int()
version_micro = version_arr[2].to_int()
company_name = ''
project_desc = ''
copyright = 'Copyright © ' + company_name

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

# cpp sources for binary/executable
sources = [
  'src/main.cpp',
  'src/config.cpp',
  'src/log.cpp',
]

# Subdirectories with meson.build
subdir('tests')
subdir('docs')

# Platform specific
subdir('windows')

# Copy runtime files
subdir('config')

exe = executable(
  'MyApp', sources,
  cpp_pch : ['pch/pch.hpp', 'pch/pch.cpp'],
  include_directories : [inc, inc_ext],
  # dependencies : [fmt,spdlog],
  # link_with : openssl,
  # install : true,
)

# TODO:
# Copy binary and dll to app/bin
# Copy config to app/config
# Create link/shortcut app/<name> -> app/bin/<name>
