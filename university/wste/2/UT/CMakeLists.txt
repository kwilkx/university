cmake_minimum_required (VERSION 2.6)

option(test "Build all tests." OFF)

# executable
project (UT)
add_executable(Main vector.cpp)
add_definitions(-std=c++11)

# UT
# to enable please use 
# cmake -Dtest=ON

if (test)
	enable_testing()
	find_package(GTest REQUIRED)
	add_executable(runTests test.cpp)
	target_link_libraries(runTests ${GTEST_BOTH_LIBRARIES} pthread)
endif()

		MESSAGE( STATUS "CMAKE_BINARY_DIR:         " ${CMAKE_BINARY_DIR} )
		MESSAGE( STATUS "GTEST_LIBRARIES:         " ${GTEST_LIBRARIES} )
		MESSAGE( STATUS "GMOCK_LIBRARIES:         " ${GMOCK_LIBRARIES} )
		MESSAGE( STATUS "GMOCK_INCLUDE_DIRS:         " ${GMOCK_INCLUDE_DIRS} )
		MESSAGE( STATUS "GTEST_INCLUDE_DIRS:         " ${GTEST_INCLUDE_DIRS} )
