cmake_minimum_required(VERSION 3.26)
project(SFML_HG)

include(FetchContent)
set(BUILD_SHARED_LIBS OFF)
FETCHCONTENT_DECLARE(SFML_HG GIT_REPOSITORY https://github.com/SFML/SFML.git GIT_TAG 2.5.1)
FETCHCONTENT_MAKEAVAILABLE(SFML_HG)

set(CMAKE_CXX_STANDARD 17)

add_executable(SFML_HG main.cpp)

target_link_libraries(SFML_HG sfml-graphics)
