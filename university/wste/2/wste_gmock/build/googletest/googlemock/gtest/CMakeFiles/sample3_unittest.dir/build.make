# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/cmake-gui

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/krwi/wste/wste_gmock

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/krwi/wste/wste_gmock/build

# Include any dependencies generated for this target.
include googletest/googlemock/gtest/CMakeFiles/sample3_unittest.dir/depend.make

# Include the progress variables for this target.
include googletest/googlemock/gtest/CMakeFiles/sample3_unittest.dir/progress.make

# Include the compile flags for this target's objects.
include googletest/googlemock/gtest/CMakeFiles/sample3_unittest.dir/flags.make

googletest/googlemock/gtest/CMakeFiles/sample3_unittest.dir/samples/sample3_unittest.cc.o: googletest/googlemock/gtest/CMakeFiles/sample3_unittest.dir/flags.make
googletest/googlemock/gtest/CMakeFiles/sample3_unittest.dir/samples/sample3_unittest.cc.o: ../googletest/googletest/samples/sample3_unittest.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/krwi/wste/wste_gmock/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object googletest/googlemock/gtest/CMakeFiles/sample3_unittest.dir/samples/sample3_unittest.cc.o"
	cd /home/krwi/wste/wste_gmock/build/googletest/googlemock/gtest && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/sample3_unittest.dir/samples/sample3_unittest.cc.o -c /home/krwi/wste/wste_gmock/googletest/googletest/samples/sample3_unittest.cc

googletest/googlemock/gtest/CMakeFiles/sample3_unittest.dir/samples/sample3_unittest.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sample3_unittest.dir/samples/sample3_unittest.cc.i"
	cd /home/krwi/wste/wste_gmock/build/googletest/googlemock/gtest && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/krwi/wste/wste_gmock/googletest/googletest/samples/sample3_unittest.cc > CMakeFiles/sample3_unittest.dir/samples/sample3_unittest.cc.i

googletest/googlemock/gtest/CMakeFiles/sample3_unittest.dir/samples/sample3_unittest.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sample3_unittest.dir/samples/sample3_unittest.cc.s"
	cd /home/krwi/wste/wste_gmock/build/googletest/googlemock/gtest && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/krwi/wste/wste_gmock/googletest/googletest/samples/sample3_unittest.cc -o CMakeFiles/sample3_unittest.dir/samples/sample3_unittest.cc.s

googletest/googlemock/gtest/CMakeFiles/sample3_unittest.dir/samples/sample3_unittest.cc.o.requires:
.PHONY : googletest/googlemock/gtest/CMakeFiles/sample3_unittest.dir/samples/sample3_unittest.cc.o.requires

googletest/googlemock/gtest/CMakeFiles/sample3_unittest.dir/samples/sample3_unittest.cc.o.provides: googletest/googlemock/gtest/CMakeFiles/sample3_unittest.dir/samples/sample3_unittest.cc.o.requires
	$(MAKE) -f googletest/googlemock/gtest/CMakeFiles/sample3_unittest.dir/build.make googletest/googlemock/gtest/CMakeFiles/sample3_unittest.dir/samples/sample3_unittest.cc.o.provides.build
.PHONY : googletest/googlemock/gtest/CMakeFiles/sample3_unittest.dir/samples/sample3_unittest.cc.o.provides

googletest/googlemock/gtest/CMakeFiles/sample3_unittest.dir/samples/sample3_unittest.cc.o.provides.build: googletest/googlemock/gtest/CMakeFiles/sample3_unittest.dir/samples/sample3_unittest.cc.o

# Object files for target sample3_unittest
sample3_unittest_OBJECTS = \
"CMakeFiles/sample3_unittest.dir/samples/sample3_unittest.cc.o"

# External object files for target sample3_unittest
sample3_unittest_EXTERNAL_OBJECTS =

googletest/googlemock/gtest/sample3_unittest: googletest/googlemock/gtest/CMakeFiles/sample3_unittest.dir/samples/sample3_unittest.cc.o
googletest/googlemock/gtest/sample3_unittest: googletest/googlemock/gtest/CMakeFiles/sample3_unittest.dir/build.make
googletest/googlemock/gtest/sample3_unittest: googletest/googlemock/gtest/libgtest_main.a
googletest/googlemock/gtest/sample3_unittest: googletest/googlemock/gtest/libgtest.a
googletest/googlemock/gtest/sample3_unittest: googletest/googlemock/gtest/CMakeFiles/sample3_unittest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable sample3_unittest"
	cd /home/krwi/wste/wste_gmock/build/googletest/googlemock/gtest && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sample3_unittest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
googletest/googlemock/gtest/CMakeFiles/sample3_unittest.dir/build: googletest/googlemock/gtest/sample3_unittest
.PHONY : googletest/googlemock/gtest/CMakeFiles/sample3_unittest.dir/build

googletest/googlemock/gtest/CMakeFiles/sample3_unittest.dir/requires: googletest/googlemock/gtest/CMakeFiles/sample3_unittest.dir/samples/sample3_unittest.cc.o.requires
.PHONY : googletest/googlemock/gtest/CMakeFiles/sample3_unittest.dir/requires

googletest/googlemock/gtest/CMakeFiles/sample3_unittest.dir/clean:
	cd /home/krwi/wste/wste_gmock/build/googletest/googlemock/gtest && $(CMAKE_COMMAND) -P CMakeFiles/sample3_unittest.dir/cmake_clean.cmake
.PHONY : googletest/googlemock/gtest/CMakeFiles/sample3_unittest.dir/clean

googletest/googlemock/gtest/CMakeFiles/sample3_unittest.dir/depend:
	cd /home/krwi/wste/wste_gmock/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/krwi/wste/wste_gmock /home/krwi/wste/wste_gmock/googletest/googletest /home/krwi/wste/wste_gmock/build /home/krwi/wste/wste_gmock/build/googletest/googlemock/gtest /home/krwi/wste/wste_gmock/build/googletest/googlemock/gtest/CMakeFiles/sample3_unittest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : googletest/googlemock/gtest/CMakeFiles/sample3_unittest.dir/depend

