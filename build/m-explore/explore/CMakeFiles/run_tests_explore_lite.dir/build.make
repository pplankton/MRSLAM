# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/plankton/DDP/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/plankton/DDP/build

# Utility rule file for run_tests_explore_lite.

# Include the progress variables for this target.
include m-explore/explore/CMakeFiles/run_tests_explore_lite.dir/progress.make

run_tests_explore_lite: m-explore/explore/CMakeFiles/run_tests_explore_lite.dir/build.make

.PHONY : run_tests_explore_lite

# Rule to build all files generated by this target.
m-explore/explore/CMakeFiles/run_tests_explore_lite.dir/build: run_tests_explore_lite

.PHONY : m-explore/explore/CMakeFiles/run_tests_explore_lite.dir/build

m-explore/explore/CMakeFiles/run_tests_explore_lite.dir/clean:
	cd /home/plankton/DDP/build/m-explore/explore && $(CMAKE_COMMAND) -P CMakeFiles/run_tests_explore_lite.dir/cmake_clean.cmake
.PHONY : m-explore/explore/CMakeFiles/run_tests_explore_lite.dir/clean

m-explore/explore/CMakeFiles/run_tests_explore_lite.dir/depend:
	cd /home/plankton/DDP/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/plankton/DDP/src /home/plankton/DDP/src/m-explore/explore /home/plankton/DDP/build /home/plankton/DDP/build/m-explore/explore /home/plankton/DDP/build/m-explore/explore/CMakeFiles/run_tests_explore_lite.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : m-explore/explore/CMakeFiles/run_tests_explore_lite.dir/depend

