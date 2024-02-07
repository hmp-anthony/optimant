cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_STANDARD 17)
project(optimant CXX)

include(cmake/FetchAutodiff.cmake)

enable_testing()
add_subdirectory(examples)
