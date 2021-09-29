# Tests
test_sources = [
  'main.cpp',
  'factorial.cpp',
]
test = executable(
  'MyAppTest', 
  test_sources,
  include_directories : [inc, inc_ext],
)
test('Catch2 tests', test)
