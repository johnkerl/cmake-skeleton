cmake_minimum_required (VERSION 3.24)

project(skeleton)

# TODO: try to get these from globbing

#file(GLOB_RECURSE SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/../skeleton **.cpp)
#add_library(
#  skeleton # results in libskeleton.so / libskeleton.dylib, so, say "skeleton" here not "libskeleton"
#  SHARED
#  ${SOURCES}
#)

add_library(
  skeleton # results in libskeleton.so / libskeleton.dylib, so, say "skeleton" here not "libskeleton"
  SHARED
  ../skeleton/base/functions.cpp
)

target_include_directories(${PROJECT_NAME}
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/..
)
target_link_libraries(${PROJECT_NAME} PUBLIC
    base
)
