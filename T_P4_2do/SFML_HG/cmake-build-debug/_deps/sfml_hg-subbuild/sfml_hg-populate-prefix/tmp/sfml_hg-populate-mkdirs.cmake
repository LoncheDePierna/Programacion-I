# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/Users/Diego/CLionProjects/Programacion-I/T_P4_do/SFML_HG/cmake-build-debug/_deps/sfml_hg-src"
  "C:/Users/Diego/CLionProjects/Programacion-I/T_P4_do/SFML_HG/cmake-build-debug/_deps/sfml_hg-build"
  "C:/Users/Diego/CLionProjects/Programacion-I/T_P4_do/SFML_HG/cmake-build-debug/_deps/sfml_hg-subbuild/sfml_hg-populate-prefix"
  "C:/Users/Diego/CLionProjects/Programacion-I/T_P4_do/SFML_HG/cmake-build-debug/_deps/sfml_hg-subbuild/sfml_hg-populate-prefix/tmp"
  "C:/Users/Diego/CLionProjects/Programacion-I/T_P4_do/SFML_HG/cmake-build-debug/_deps/sfml_hg-subbuild/sfml_hg-populate-prefix/src/sfml_hg-populate-stamp"
  "C:/Users/Diego/CLionProjects/Programacion-I/T_P4_do/SFML_HG/cmake-build-debug/_deps/sfml_hg-subbuild/sfml_hg-populate-prefix/src"
  "C:/Users/Diego/CLionProjects/Programacion-I/T_P4_do/SFML_HG/cmake-build-debug/_deps/sfml_hg-subbuild/sfml_hg-populate-prefix/src/sfml_hg-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/Users/Diego/CLionProjects/Programacion-I/T_P4_do/SFML_HG/cmake-build-debug/_deps/sfml_hg-subbuild/sfml_hg-populate-prefix/src/sfml_hg-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "C:/Users/Diego/CLionProjects/Programacion-I/T_P4_do/SFML_HG/cmake-build-debug/_deps/sfml_hg-subbuild/sfml_hg-populate-prefix/src/sfml_hg-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
