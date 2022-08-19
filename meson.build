project(
  'meson_cpython',
  'cpp',
  meson_version: '>= 0.63.0',
  version: '1.0.0',
  default_options : ['warning_level=3', 'cpp_std=c++17', 'default_library=static'],
  license : 'GPL3'
)

pymod = import('python')
python3 = pymod.find_installation('python3')

python3.extension_module('meson_cpython', 'module.cpp',
                         install: true
                        )


summary({
        'C++': meson.get_compiler('cpp').cmd_array()
        }, section: 'Compilers')
