# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /home/margot/Downloads/clion-2019.3.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/margot/Downloads/clion-2019.3.4/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/margot/dz_2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/margot/dz_2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/single_thread.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/single_thread.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/single_thread.dir/flags.make

CMakeFiles/single_thread.dir/for_static_library/single_app.c.o: CMakeFiles/single_thread.dir/flags.make
CMakeFiles/single_thread.dir/for_static_library/single_app.c.o: ../for_static_library/single_app.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/margot/dz_2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/single_thread.dir/for_static_library/single_app.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/single_thread.dir/for_static_library/single_app.c.o   -c /home/margot/dz_2/for_static_library/single_app.c

CMakeFiles/single_thread.dir/for_static_library/single_app.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/single_thread.dir/for_static_library/single_app.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/margot/dz_2/for_static_library/single_app.c > CMakeFiles/single_thread.dir/for_static_library/single_app.c.i

CMakeFiles/single_thread.dir/for_static_library/single_app.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/single_thread.dir/for_static_library/single_app.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/margot/dz_2/for_static_library/single_app.c -o CMakeFiles/single_thread.dir/for_static_library/single_app.c.s

# Object files for target single_thread
single_thread_OBJECTS = \
"CMakeFiles/single_thread.dir/for_static_library/single_app.c.o"

# External object files for target single_thread
single_thread_EXTERNAL_OBJECTS =

single_thread: CMakeFiles/single_thread.dir/for_static_library/single_app.c.o
single_thread: CMakeFiles/single_thread.dir/build.make
single_thread: libstatic.a
single_thread: CMakeFiles/single_thread.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/margot/dz_2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable single_thread"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/single_thread.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/single_thread.dir/build: single_thread

.PHONY : CMakeFiles/single_thread.dir/build

CMakeFiles/single_thread.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/single_thread.dir/cmake_clean.cmake
.PHONY : CMakeFiles/single_thread.dir/clean

CMakeFiles/single_thread.dir/depend:
	cd /home/margot/dz_2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/margot/dz_2 /home/margot/dz_2 /home/margot/dz_2/cmake-build-debug /home/margot/dz_2/cmake-build-debug /home/margot/dz_2/cmake-build-debug/CMakeFiles/single_thread.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/single_thread.dir/depend

