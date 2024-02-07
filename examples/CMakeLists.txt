add_executable(import_test import_test.cpp)

target_include_directories(import_test PUBLIC ${autodiff_SOURCE_DIR})
target_link_libraries(import_test PUBLIC ${autodiff_LIBRARIES})
