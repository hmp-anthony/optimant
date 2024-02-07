add_executable(gd_test gd_test.cpp)
target_link_libraries(gd_test gtest_main)
add_test(NAME gd_test COMMAND gd_test)

target_include_directories(gd_test PUBLIC ${autodiff_SOURCE_DIR})
target_link_libraries(gd_test PUBLIC ${autodiff_LIBRARIES})
