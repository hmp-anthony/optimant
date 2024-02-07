add_executable(gd gd.cpp)

target_include_directories(gd PUBLIC ${autodiff_SOURCE_DIR})
target_link_libraries(gd PUBLIC ${autodiff_LIBRARIES})
