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

# Include any dependencies generated for this target.
include HistOption/CMakeFiles/HistOption.dir/depend.make

# Include the progress variables for this target.
include HistOption/CMakeFiles/HistOption.dir/progress.make

# Include the compile flags for this target's objects.
include HistOption/CMakeFiles/HistOption.dir/flags.make

HistOption/CMakeFiles/HistOption.dir/HistOption_autogen/mocs_compilation.cpp.o: HistOption/CMakeFiles/HistOption.dir/flags.make
HistOption/CMakeFiles/HistOption.dir/HistOption_autogen/mocs_compilation.cpp.o: HistOption/HistOption_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rodelph/dev/ImageProc/build-ImageProc-Desktop-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object HistOption/CMakeFiles/HistOption.dir/HistOption_autogen/mocs_compilation.cpp.o"
	cd /home/rodelph/dev/ImageProc/build-ImageProc-Desktop-Release/HistOption && /bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HistOption.dir/HistOption_autogen/mocs_compilation.cpp.o -c /home/rodelph/dev/ImageProc/build-ImageProc-Desktop-Release/HistOption/HistOption_autogen/mocs_compilation.cpp

HistOption/CMakeFiles/HistOption.dir/HistOption_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HistOption.dir/HistOption_autogen/mocs_compilation.cpp.i"
	cd /home/rodelph/dev/ImageProc/build-ImageProc-Desktop-Release/HistOption && /bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rodelph/dev/ImageProc/build-ImageProc-Desktop-Release/HistOption/HistOption_autogen/mocs_compilation.cpp > CMakeFiles/HistOption.dir/HistOption_autogen/mocs_compilation.cpp.i

HistOption/CMakeFiles/HistOption.dir/HistOption_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HistOption.dir/HistOption_autogen/mocs_compilation.cpp.s"
	cd /home/rodelph/dev/ImageProc/build-ImageProc-Desktop-Release/HistOption && /bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rodelph/dev/ImageProc/build-ImageProc-Desktop-Release/HistOption/HistOption_autogen/mocs_compilation.cpp -o CMakeFiles/HistOption.dir/HistOption_autogen/mocs_compilation.cpp.s

HistOption/CMakeFiles/HistOption.dir/src/HistOption/histogram.cpp.o: HistOption/CMakeFiles/HistOption.dir/flags.make
HistOption/CMakeFiles/HistOption.dir/src/HistOption/histogram.cpp.o: ../HistOption/src/HistOption/histogram.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rodelph/dev/ImageProc/build-ImageProc-Desktop-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object HistOption/CMakeFiles/HistOption.dir/src/HistOption/histogram.cpp.o"
	cd /home/rodelph/dev/ImageProc/build-ImageProc-Desktop-Release/HistOption && /bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HistOption.dir/src/HistOption/histogram.cpp.o -c /home/rodelph/dev/ImageProc/HistOption/src/HistOption/histogram.cpp

HistOption/CMakeFiles/HistOption.dir/src/HistOption/histogram.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HistOption.dir/src/HistOption/histogram.cpp.i"
	cd /home/rodelph/dev/ImageProc/build-ImageProc-Desktop-Release/HistOption && /bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rodelph/dev/ImageProc/HistOption/src/HistOption/histogram.cpp > CMakeFiles/HistOption.dir/src/HistOption/histogram.cpp.i

HistOption/CMakeFiles/HistOption.dir/src/HistOption/histogram.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HistOption.dir/src/HistOption/histogram.cpp.s"
	cd /home/rodelph/dev/ImageProc/build-ImageProc-Desktop-Release/HistOption && /bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rodelph/dev/ImageProc/HistOption/src/HistOption/histogram.cpp -o CMakeFiles/HistOption.dir/src/HistOption/histogram.cpp.s

# Object files for target HistOption
HistOption_OBJECTS = \
"CMakeFiles/HistOption.dir/HistOption_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/HistOption.dir/src/HistOption/histogram.cpp.o"

# External object files for target HistOption
HistOption_EXTERNAL_OBJECTS =

HistOption/libHistOption.a: HistOption/CMakeFiles/HistOption.dir/HistOption_autogen/mocs_compilation.cpp.o
HistOption/libHistOption.a: HistOption/CMakeFiles/HistOption.dir/src/HistOption/histogram.cpp.o
HistOption/libHistOption.a: HistOption/CMakeFiles/HistOption.dir/build.make
HistOption/libHistOption.a: HistOption/CMakeFiles/HistOption.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rodelph/dev/ImageProc/build-ImageProc-Desktop-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libHistOption.a"
	cd /home/rodelph/dev/ImageProc/build-ImageProc-Desktop-Release/HistOption && $(CMAKE_COMMAND) -P CMakeFiles/HistOption.dir/cmake_clean_target.cmake
	cd /home/rodelph/dev/ImageProc/build-ImageProc-Desktop-Release/HistOption && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/HistOption.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
HistOption/CMakeFiles/HistOption.dir/build: HistOption/libHistOption.a

.PHONY : HistOption/CMakeFiles/HistOption.dir/build

HistOption/CMakeFiles/HistOption.dir/clean:
	cd /home/rodelph/dev/ImageProc/build-ImageProc-Desktop-Release/HistOption && $(CMAKE_COMMAND) -P CMakeFiles/HistOption.dir/cmake_clean.cmake
.PHONY : HistOption/CMakeFiles/HistOption.dir/clean

HistOption/CMakeFiles/HistOption.dir/depend:
	cd /home/rodelph/dev/ImageProc/build-ImageProc-Desktop-Release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rodelph/dev/ImageProc /home/rodelph/dev/ImageProc/HistOption /home/rodelph/dev/ImageProc/build-ImageProc-Desktop-Release /home/rodelph/dev/ImageProc/build-ImageProc-Desktop-Release/HistOption /home/rodelph/dev/ImageProc/build-ImageProc-Desktop-Release/HistOption/CMakeFiles/HistOption.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : HistOption/CMakeFiles/HistOption.dir/depend
