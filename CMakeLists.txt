cmake_minimum_required(VERSION 2.8)
# set(CMAKE_CXX_FLAGS "-std=c++98")
# set (CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/build")
# file(DOWNLOAD
#  "https://raw.githubusercontent.com/octoblu/cmake-external-project-utils/master/external-project-utils.cmake"
#  "${CMAKE_MODULE_PATH}/external-project-utils.cmake"
# )

# include(external-project-utils)

project (what-is-strings)

file(GLOB HEADER_FILES *.h)

add_executable(what-is-strings what-is-strings.cpp)
