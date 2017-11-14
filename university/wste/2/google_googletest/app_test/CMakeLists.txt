cmake_minimum_required(VERSION 2.6.4)

include_directories( ${gmock_SOURCE_DIR}/include )
include_directories( ${gtest_SOURCE_DIR}/include )
include_directories( ${CMAKE_SOURCE_DIR} )

enable_testing()

add_executable(app_test main.cpp ../app/Stage.cpp)

target_link_libraries(app_test ${gmock_BINARY_DIR}/libgmock.a pthread)
target_link_libraries(app_test libgmock.a pthread)