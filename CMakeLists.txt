cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_STANDARD 17)
project(optimant CXX)

enable_testing()

include(cmake/FetchAutodiff.cmake)

add_subdirectory(examples)
