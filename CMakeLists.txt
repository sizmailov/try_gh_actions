cmake_minimum_required(VERSION 3.17)
project(try_gh_actions)

set(CMAKE_CXX_STANDARD 20)

add_executable(test_main my_test.cpp)

enable_testing()
add_test(NAME my_test COMMAND test_main)