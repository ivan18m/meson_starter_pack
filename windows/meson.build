# Windows
# Creates build/windows/<app>.rc & <app>.manifest on meson setup

if host_machine.system() == 'windows'
  message('Generating Windows resource files...')
  win_conf = configuration_data()
  win_conf.set('PACKAGE_NAME', meson.project_name())
  win_conf.set('PACKAGE_VERSION', meson.project_version())
  win_conf.set('VERSION_MAJOR', version_major)
  win_conf.set('VERSION_MINOR', version_minor)
  win_conf.set('VERSION_MICRO', version_micro)
  win_conf.set('PACKAGE_DESC', meson.project_version())
  win_conf.set('COMPANY_NAME', company_name)
  win_conf.set('COPYRIGHT', copyright)
  win_conf.set('PROJECT_DIR', meson.project_source_root())
  win_conf.set('BUILD_DIR', meson.current_build_dir())

  configure_file(
    input : 'manifest.in',
    output : meson.project_name()+'.manifest',
    configuration : win_conf,
  )

  configure_file(
    input : 'rc.in',
    output : meson.project_name()+'.rc',
    configuration : win_conf,
  )

  configure_file(
    input : 'resources.h',
    output : 'resources.h',
    copy: true,
  )

  sources += import('windows').compile_resources(
      depend_files : ['resources.h', meson.project_name()+'.rc', meson.project_name()+'.manifest'],
  )
endif
