cmake_minimum_required (VERSION 3.8)

include(GoogleTest)
add_executable (CMakeProject2 "CMakeProject2.cpp")

find_package(GTest CONFIG REQUIRED)
target_link_libraries(CMakeProject2 PRIVATE GTest::gtest GTest::gtest_main GTest::gmock GTest::gmock_main)

gtest_add_tests(TARGET CMakeProject2)
