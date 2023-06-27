cmake_minimum_required (VERSION 3.24)

project(skeleton-main)

add_executable(
    skeleton-main
    skeleton-main.cpp
)

target_include_directories(${PROJECT_NAME}
  PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/../..
    ${CMAKE_CURRENT_SOURCE_DIR}
)
target_link_libraries(${PROJECT_NAME} PRIVATE
    base
)
