# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/Users/Diego/CLionProjects/Programacion-I/T_P4_2do/HG_SFML/cmake-build-debug/_deps/hg_sfml-src"
  "C:/Users/Diego/CLionProjects/Programacion-I/T_P4_2do/HG_SFML/cmake-build-debug/_deps/hg_sfml-build"
  "C:/Users/Diego/CLionProjects/Programacion-I/T_P4_2do/HG_SFML/cmake-build-debug/_deps/hg_sfml-subbuild/hg_sfml-populate-prefix"
  "C:/Users/Diego/CLionProjects/Programacion-I/T_P4_2do/HG_SFML/cmake-build-debug/_deps/hg_sfml-subbuild/hg_sfml-populate-prefix/tmp"
  "C:/Users/Diego/CLionProjects/Programacion-I/T_P4_2do/HG_SFML/cmake-build-debug/_deps/hg_sfml-subbuild/hg_sfml-populate-prefix/src/hg_sfml-populate-stamp"
  "C:/Users/Diego/CLionProjects/Programacion-I/T_P4_2do/HG_SFML/cmake-build-debug/_deps/hg_sfml-subbuild/hg_sfml-populate-prefix/src"
  "C:/Users/Diego/CLionProjects/Programacion-I/T_P4_2do/HG_SFML/cmake-build-debug/_deps/hg_sfml-subbuild/hg_sfml-populate-prefix/src/hg_sfml-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/Users/Diego/CLionProjects/Programacion-I/T_P4_2do/HG_SFML/cmake-build-debug/_deps/hg_sfml-subbuild/hg_sfml-populate-prefix/src/hg_sfml-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "C:/Users/Diego/CLionProjects/Programacion-I/T_P4_2do/HG_SFML/cmake-build-debug/_deps/hg_sfml-subbuild/hg_sfml-populate-prefix/src/hg_sfml-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
