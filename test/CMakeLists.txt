set(CMAKE_CXX_FLAGS "-std=c++11")
message ("building tests for what-is-strings")

file(GLOB SRCS *.cpp)

add_executable(what-is-strings-test ${SRCS})

linkExternalProject(what-is-strings-test "gtest")
linkExternalProject(what-is-strings-test "gmock")

target_link_libraries(what-is-strings-test
    what-is-strings
    ${GTEST_LIB_DIR}/libgtest_main.a
)

add_test(what-is-strings what-is-strings-test)
