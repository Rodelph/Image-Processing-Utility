# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /home/rodelph/dev/ImageProc

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rodelph/dev/ImageProc/build-ImageProc-Desktop-Release

# Utility rule file for TreshFilt_autogen.

# Include the progress variables for this target.
include FiltOption/TreshFilt/CMakeFiles/TreshFilt_autogen.dir/progress.make

FiltOption/TreshFilt/CMakeFiles/TreshFilt_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/rodelph/dev/ImageProc/build-ImageProc-Desktop-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target TreshFilt"
	cd /home/rodelph/dev/ImageProc/build-ImageProc-Desktop-Release/FiltOption/TreshFilt && /usr/bin/cmake -E cmake_autogen /home/rodelph/dev/ImageProc/build-ImageProc-Desktop-Release/FiltOption/TreshFilt/CMakeFiles/TreshFilt_autogen.dir/AutogenInfo.json Release

TreshFilt_autogen: FiltOption/TreshFilt/CMakeFiles/TreshFilt_autogen
TreshFilt_autogen: FiltOption/TreshFilt/CMakeFiles/TreshFilt_autogen.dir/build.make

.PHONY : TreshFilt_autogen

# Rule to build all files generated by this target.
FiltOption/TreshFilt/CMakeFiles/TreshFilt_autogen.dir/build: TreshFilt_autogen

.PHONY : FiltOption/TreshFilt/CMakeFiles/TreshFilt_autogen.dir/build

FiltOption/TreshFilt/CMakeFiles/TreshFilt_autogen.dir/clean:
	cd /home/rodelph/dev/ImageProc/build-ImageProc-Desktop-Release/FiltOption/TreshFilt && $(CMAKE_COMMAND) -P CMakeFiles/TreshFilt_autogen.dir/cmake_clean.cmake
.PHONY : FiltOption/TreshFilt/CMakeFiles/TreshFilt_autogen.dir/clean

FiltOption/TreshFilt/CMakeFiles/TreshFilt_autogen.dir/depend:
	cd /home/rodelph/dev/ImageProc/build-ImageProc-Desktop-Release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rodelph/dev/ImageProc /home/rodelph/dev/ImageProc/FiltOption/TreshFilt /home/rodelph/dev/ImageProc/build-ImageProc-Desktop-Release /home/rodelph/dev/ImageProc/build-ImageProc-Desktop-Release/FiltOption/TreshFilt /home/rodelph/dev/ImageProc/build-ImageProc-Desktop-Release/FiltOption/TreshFilt/CMakeFiles/TreshFilt_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : FiltOption/TreshFilt/CMakeFiles/TreshFilt_autogen.dir/depend

