cmake_minimum_required (VERSION 3.24)

project(base)

add_library(${PROJECT_NAME}
  functions.cpp
)

target_include_directories(${PROJECT_NAME}
    PUBLIC ${PROJECT_SOURCE_DIR}/../..
)
