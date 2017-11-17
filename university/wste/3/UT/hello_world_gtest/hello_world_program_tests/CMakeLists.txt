cmake_minimum_required (VERSION 2.6)



add_executable(hello_world_program_tests main.cpp test.cpp inOut.cpp logic/file.cpp)

enable_testing()
find_package(GTest REQUIRED)
target_link_libraries(hello_world_program_tests ${GTEST_BOTH_LIBRARIES} pthread)

#add_definitions(-std=c++11)
