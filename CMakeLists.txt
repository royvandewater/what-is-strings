cmake_minimum_required(VERSION 2.8)
set(CMAKE_CXX_FLAGS "-std=c++98")
set (CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/build")
file(DOWNLOAD
 "https://raw.githubusercontent.com/octoblu/cmake-external-project-utils/master/external-project-utils.cmake"
 "${CMAKE_MODULE_PATH}/external-project-utils.cmake"
)

include(external-project-utils)

project (what-is-strings)

file(GLOB HEADER_FILES *.h)

add_library(what-is-strings STATIC "what-is-strings.cpp" ${HEADER_FILES})

getExternalProject("gtest" "https://googletest.googlecode.com/files/gtest-1.7.0.zip")
getExternalProject("gmock" "https://googlemock.googlecode.com/files/gmock-1.7.0.zip")

set_target_properties(what-is-strings PROPERTIES ENABLE_EXPORTS true)

linkExternalProject(what-is-strings "gtest")
linkExternalProject(what-is-strings "gmock")

option(test "Build all tests." OFF)

if (test)
  enable_testing()
  add_subdirectory(test)
endif()
