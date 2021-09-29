# Doxygen docs
# Creates build/docs/Doxyfile on meson setup
# Creates build/docs/html on meson compile

doxygen = find_program('doxygen', required : false)

if doxygen.found()
  message('Generating docs...')
  # This will be variables in Doxyfile.in
  doc_conf = configuration_data()
  doc_conf.set('PACKAGE_NAME', meson.project_name())
  doc_conf.set('PACKAGE_VERSION', meson.project_version())
  doc_conf.set('PROJECT_DIR', meson.project_source_root())
  doc_conf.set('BUILD_DIR', meson.current_build_dir())

  doxyfile = configure_file(
    input : 'Doxyfile.in',
    output : 'Doxyfile',
    configuration : doc_conf,
  )

  custom_target(
    'doxygen',
    command : [ doxygen, doxyfile ],
    build_by_default : true,
    output: ['html'],
  )
else
  warning('Documentation disabled without doxygen')
endif
