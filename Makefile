# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_SOURCE_DIR = /home/liam/codebase/GameOClicks

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/liam/codebase/GameOClicks

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/bin/ccmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/liam/codebase/GameOClicks/CMakeFiles /home/liam/codebase/GameOClicks/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/liam/codebase/GameOClicks/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named GameOfClicks

# Build rule for target.
GameOfClicks: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 GameOfClicks
.PHONY : GameOfClicks

# fast build rule for target.
GameOfClicks/fast:
	$(MAKE) -f CMakeFiles/GameOfClicks.dir/build.make CMakeFiles/GameOfClicks.dir/build
.PHONY : GameOfClicks/fast

src/Application.o: src/Application.cpp.o

.PHONY : src/Application.o

# target to build an object file
src/Application.cpp.o:
	$(MAKE) -f CMakeFiles/GameOfClicks.dir/build.make CMakeFiles/GameOfClicks.dir/src/Application.cpp.o
.PHONY : src/Application.cpp.o

src/Application.i: src/Application.cpp.i

.PHONY : src/Application.i

# target to preprocess a source file
src/Application.cpp.i:
	$(MAKE) -f CMakeFiles/GameOfClicks.dir/build.make CMakeFiles/GameOfClicks.dir/src/Application.cpp.i
.PHONY : src/Application.cpp.i

src/Application.s: src/Application.cpp.s

.PHONY : src/Application.s

# target to generate assembly for a file
src/Application.cpp.s:
	$(MAKE) -f CMakeFiles/GameOfClicks.dir/build.make CMakeFiles/GameOfClicks.dir/src/Application.cpp.s
.PHONY : src/Application.cpp.s

src/Display.o: src/Display.cpp.o

.PHONY : src/Display.o

# target to build an object file
src/Display.cpp.o:
	$(MAKE) -f CMakeFiles/GameOfClicks.dir/build.make CMakeFiles/GameOfClicks.dir/src/Display.cpp.o
.PHONY : src/Display.cpp.o

src/Display.i: src/Display.cpp.i

.PHONY : src/Display.i

# target to preprocess a source file
src/Display.cpp.i:
	$(MAKE) -f CMakeFiles/GameOfClicks.dir/build.make CMakeFiles/GameOfClicks.dir/src/Display.cpp.i
.PHONY : src/Display.cpp.i

src/Display.s: src/Display.cpp.s

.PHONY : src/Display.s

# target to generate assembly for a file
src/Display.cpp.s:
	$(MAKE) -f CMakeFiles/GameOfClicks.dir/build.make CMakeFiles/GameOfClicks.dir/src/Display.cpp.s
.PHONY : src/Display.cpp.s

src/Game_State.o: src/Game_State.cpp.o

.PHONY : src/Game_State.o

# target to build an object file
src/Game_State.cpp.o:
	$(MAKE) -f CMakeFiles/GameOfClicks.dir/build.make CMakeFiles/GameOfClicks.dir/src/Game_State.cpp.o
.PHONY : src/Game_State.cpp.o

src/Game_State.i: src/Game_State.cpp.i

.PHONY : src/Game_State.i

# target to preprocess a source file
src/Game_State.cpp.i:
	$(MAKE) -f CMakeFiles/GameOfClicks.dir/build.make CMakeFiles/GameOfClicks.dir/src/Game_State.cpp.i
.PHONY : src/Game_State.cpp.i

src/Game_State.s: src/Game_State.cpp.s

.PHONY : src/Game_State.s

# target to generate assembly for a file
src/Game_State.cpp.s:
	$(MAKE) -f CMakeFiles/GameOfClicks.dir/build.make CMakeFiles/GameOfClicks.dir/src/Game_State.cpp.s
.PHONY : src/Game_State.cpp.s

src/RandomGame.o: src/RandomGame.cpp.o

.PHONY : src/RandomGame.o

# target to build an object file
src/RandomGame.cpp.o:
	$(MAKE) -f CMakeFiles/GameOfClicks.dir/build.make CMakeFiles/GameOfClicks.dir/src/RandomGame.cpp.o
.PHONY : src/RandomGame.cpp.o

src/RandomGame.i: src/RandomGame.cpp.i

.PHONY : src/RandomGame.i

# target to preprocess a source file
src/RandomGame.cpp.i:
	$(MAKE) -f CMakeFiles/GameOfClicks.dir/build.make CMakeFiles/GameOfClicks.dir/src/RandomGame.cpp.i
.PHONY : src/RandomGame.cpp.i

src/RandomGame.s: src/RandomGame.cpp.s

.PHONY : src/RandomGame.s

# target to generate assembly for a file
src/RandomGame.cpp.s:
	$(MAKE) -f CMakeFiles/GameOfClicks.dir/build.make CMakeFiles/GameOfClicks.dir/src/RandomGame.cpp.s
.PHONY : src/RandomGame.cpp.s

src/main.o: src/main.cpp.o

.PHONY : src/main.o

# target to build an object file
src/main.cpp.o:
	$(MAKE) -f CMakeFiles/GameOfClicks.dir/build.make CMakeFiles/GameOfClicks.dir/src/main.cpp.o
.PHONY : src/main.cpp.o

src/main.i: src/main.cpp.i

.PHONY : src/main.i

# target to preprocess a source file
src/main.cpp.i:
	$(MAKE) -f CMakeFiles/GameOfClicks.dir/build.make CMakeFiles/GameOfClicks.dir/src/main.cpp.i
.PHONY : src/main.cpp.i

src/main.s: src/main.cpp.s

.PHONY : src/main.s

# target to generate assembly for a file
src/main.cpp.s:
	$(MAKE) -f CMakeFiles/GameOfClicks.dir/build.make CMakeFiles/GameOfClicks.dir/src/main.cpp.s
.PHONY : src/main.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... GameOfClicks"
	@echo "... edit_cache"
	@echo "... src/Application.o"
	@echo "... src/Application.i"
	@echo "... src/Application.s"
	@echo "... src/Display.o"
	@echo "... src/Display.i"
	@echo "... src/Display.s"
	@echo "... src/Game_State.o"
	@echo "... src/Game_State.i"
	@echo "... src/Game_State.s"
	@echo "... src/RandomGame.o"
	@echo "... src/RandomGame.i"
	@echo "... src/RandomGame.s"
	@echo "... src/main.o"
	@echo "... src/main.i"
	@echo "... src/main.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

