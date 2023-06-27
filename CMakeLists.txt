cmake_minimum_required (VERSION 3.24)

project(skeleton)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

set(CMAKE_CXX_FLAGS_RELEASE "-O2")

set(CMAKE_CXX_STANDARD 20 CACHE STRING "C++ Standard")
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(skeleton)
add_subdirectory(lib)
add_subdirectory(cli)

enable_testing()
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_CURRENT_SOURCE_DIR}/cmake/Modules/")
add_subdirectory(test)

# ----------------------------------------------------------------
install(
  DIRECTORY "skeleton/" # The trailing slash is important so "skeleton" isn't a part of the install path
  DESTINATION "include/skeleton"
  FILES_MATCHING PATTERN "*.h"
)
install(TARGETS skeleton DESTINATION lib)
install(TARGETS skeleton-main DESTINATION bin)
