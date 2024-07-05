cmake_minimum_required(VERSION 3.26)
project(HG_SFML)

include(FetchContent)
set(BUILD_SHARED_LIBS OFF)
FETCHCONTENT_DECLARE(HG_SFML GIT_REPOSITORY https://github.com/SFML/SFML.git GIT_TAG 2.5.1)
FETCHCONTENT_MAKEAVAILABLE(HG_SFML)

set(CMAKE_CXX_STANDARD 17)

add_executable(HG_SFML main.cpp)

target_link_libraries(HG_SFML sfml-graphics)
