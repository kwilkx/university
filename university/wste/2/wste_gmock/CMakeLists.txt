cmake_minimum_required(VERSION 2.6.4)

project( wste_google_mock_tests )

option(APP_SETUP_GOOGLE_PROJECT "Setup the googletest subproject" ON)
option(APP_ENABLE_TESTING "Enable tests in the current project." ON)
option(APP_ENABLE_DEBUG_INFO "Enable debug during configuration." OFF)

if (APP_SETUP_GOOGLE_PROJECT)
	execute_process( COMMAND ${PROJECT_SOURCE_DIR}/setup.sh
				 	 WORKING_DIRECTORY ${PROJECT_SOURCE_DIR} )
endif()

add_subdirectory( app )

if (APP_ENABLE_TESTING)
	add_subdirectory( googletest )
	add_subdirectory( app_test )
endif()

if (APP_ENABLE_DEBUG_INFO)
	include( ${PROJECT_SOURCE_DIR}/CMakeLists.debug.txt )
endif()
