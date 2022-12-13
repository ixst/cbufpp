cmake_minimum_required(VERSION 3.21)

set(VERSION_MAJOR 0)
set(VERSION_MINOR 0)
set(VERSION_PATCH 0)
set(
    VERSION_NAME
    ${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH}
)

project(
  cbufpp
  VERSION ${VERSION_NAME}
  DESCRIPTION "implementation of variety buffers for c++"
  LANGUAGES CXX
  HOMEPAGE_URL "https://github.com/ixst/cbufpp"
)

configure_file(
    ${CMAKE_SOURCE_DIR}/version.in
    ${CMAKE_SOURCE_DIR}/include/cbufpp/version.hh
)

set(CMAKE_CXX_FLAGS -Wall)
set(CMAKE_CXX_FLAGS_DEBUG -g)
set(CMAKE_CXX_FLAGS_RELEASE -Os)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/out)

link_directories(${CMAKE_SOURCE_DIR}/lib)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(example)
