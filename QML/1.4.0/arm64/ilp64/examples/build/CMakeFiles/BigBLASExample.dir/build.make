# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/photon/Documents/QML/1.4.0/arm64/ilp64/examples

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/photon/Documents/QML/1.4.0/arm64/ilp64/examples/build

# Include any dependencies generated for this target.
include CMakeFiles/BigBLASExample.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BigBLASExample.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BigBLASExample.dir/flags.make

CMakeFiles/BigBLASExample.dir/BigBLASExample.cpp.o: CMakeFiles/BigBLASExample.dir/flags.make
CMakeFiles/BigBLASExample.dir/BigBLASExample.cpp.o: ../BigBLASExample.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/photon/Documents/QML/1.4.0/arm64/ilp64/examples/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/BigBLASExample.dir/BigBLASExample.cpp.o"
	/home/photon/Android/Sdk/ndk/21.3.6528147/toolchains/llvm/prebuilt/linux-x86_64/bin/clang++ --target=aarch64-none-linux-android28 --gcc-toolchain=/home/photon/Android/Sdk/ndk/21.3.6528147/toolchains/llvm/prebuilt/linux-x86_64 --sysroot=/home/photon/Android/Sdk/ndk/21.3.6528147/toolchains/llvm/prebuilt/linux-x86_64/sysroot $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BigBLASExample.dir/BigBLASExample.cpp.o -c /home/photon/Documents/QML/1.4.0/arm64/ilp64/examples/BigBLASExample.cpp

CMakeFiles/BigBLASExample.dir/BigBLASExample.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BigBLASExample.dir/BigBLASExample.cpp.i"
	/home/photon/Android/Sdk/ndk/21.3.6528147/toolchains/llvm/prebuilt/linux-x86_64/bin/clang++ --target=aarch64-none-linux-android28 --gcc-toolchain=/home/photon/Android/Sdk/ndk/21.3.6528147/toolchains/llvm/prebuilt/linux-x86_64 --sysroot=/home/photon/Android/Sdk/ndk/21.3.6528147/toolchains/llvm/prebuilt/linux-x86_64/sysroot $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/photon/Documents/QML/1.4.0/arm64/ilp64/examples/BigBLASExample.cpp > CMakeFiles/BigBLASExample.dir/BigBLASExample.cpp.i

CMakeFiles/BigBLASExample.dir/BigBLASExample.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BigBLASExample.dir/BigBLASExample.cpp.s"
	/home/photon/Android/Sdk/ndk/21.3.6528147/toolchains/llvm/prebuilt/linux-x86_64/bin/clang++ --target=aarch64-none-linux-android28 --gcc-toolchain=/home/photon/Android/Sdk/ndk/21.3.6528147/toolchains/llvm/prebuilt/linux-x86_64 --sysroot=/home/photon/Android/Sdk/ndk/21.3.6528147/toolchains/llvm/prebuilt/linux-x86_64/sysroot $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/photon/Documents/QML/1.4.0/arm64/ilp64/examples/BigBLASExample.cpp -o CMakeFiles/BigBLASExample.dir/BigBLASExample.cpp.s

CMakeFiles/BigBLASExample.dir/native_debug.cpp.o: CMakeFiles/BigBLASExample.dir/flags.make
CMakeFiles/BigBLASExample.dir/native_debug.cpp.o: ../native_debug.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/photon/Documents/QML/1.4.0/arm64/ilp64/examples/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/BigBLASExample.dir/native_debug.cpp.o"
	/home/photon/Android/Sdk/ndk/21.3.6528147/toolchains/llvm/prebuilt/linux-x86_64/bin/clang++ --target=aarch64-none-linux-android28 --gcc-toolchain=/home/photon/Android/Sdk/ndk/21.3.6528147/toolchains/llvm/prebuilt/linux-x86_64 --sysroot=/home/photon/Android/Sdk/ndk/21.3.6528147/toolchains/llvm/prebuilt/linux-x86_64/sysroot $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BigBLASExample.dir/native_debug.cpp.o -c /home/photon/Documents/QML/1.4.0/arm64/ilp64/examples/native_debug.cpp

CMakeFiles/BigBLASExample.dir/native_debug.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BigBLASExample.dir/native_debug.cpp.i"
	/home/photon/Android/Sdk/ndk/21.3.6528147/toolchains/llvm/prebuilt/linux-x86_64/bin/clang++ --target=aarch64-none-linux-android28 --gcc-toolchain=/home/photon/Android/Sdk/ndk/21.3.6528147/toolchains/llvm/prebuilt/linux-x86_64 --sysroot=/home/photon/Android/Sdk/ndk/21.3.6528147/toolchains/llvm/prebuilt/linux-x86_64/sysroot $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/photon/Documents/QML/1.4.0/arm64/ilp64/examples/native_debug.cpp > CMakeFiles/BigBLASExample.dir/native_debug.cpp.i

CMakeFiles/BigBLASExample.dir/native_debug.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BigBLASExample.dir/native_debug.cpp.s"
	/home/photon/Android/Sdk/ndk/21.3.6528147/toolchains/llvm/prebuilt/linux-x86_64/bin/clang++ --target=aarch64-none-linux-android28 --gcc-toolchain=/home/photon/Android/Sdk/ndk/21.3.6528147/toolchains/llvm/prebuilt/linux-x86_64 --sysroot=/home/photon/Android/Sdk/ndk/21.3.6528147/toolchains/llvm/prebuilt/linux-x86_64/sysroot $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/photon/Documents/QML/1.4.0/arm64/ilp64/examples/native_debug.cpp -o CMakeFiles/BigBLASExample.dir/native_debug.cpp.s

# Object files for target BigBLASExample
BigBLASExample_OBJECTS = \
"CMakeFiles/BigBLASExample.dir/BigBLASExample.cpp.o" \
"CMakeFiles/BigBLASExample.dir/native_debug.cpp.o"

# External object files for target BigBLASExample
BigBLASExample_EXTERNAL_OBJECTS =

BigBLASExample: CMakeFiles/BigBLASExample.dir/BigBLASExample.cpp.o
BigBLASExample: CMakeFiles/BigBLASExample.dir/native_debug.cpp.o
BigBLASExample: CMakeFiles/BigBLASExample.dir/build.make
BigBLASExample: /home/photon/Documents/QML/1.4.0/arm64/ilp64/lib/libQML-1.4.0.so
BigBLASExample: CMakeFiles/BigBLASExample.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/photon/Documents/QML/1.4.0/arm64/ilp64/examples/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable BigBLASExample"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/BigBLASExample.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BigBLASExample.dir/build: BigBLASExample

.PHONY : CMakeFiles/BigBLASExample.dir/build

CMakeFiles/BigBLASExample.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/BigBLASExample.dir/cmake_clean.cmake
.PHONY : CMakeFiles/BigBLASExample.dir/clean

CMakeFiles/BigBLASExample.dir/depend:
	cd /home/photon/Documents/QML/1.4.0/arm64/ilp64/examples/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/photon/Documents/QML/1.4.0/arm64/ilp64/examples /home/photon/Documents/QML/1.4.0/arm64/ilp64/examples /home/photon/Documents/QML/1.4.0/arm64/ilp64/examples/build /home/photon/Documents/QML/1.4.0/arm64/ilp64/examples/build /home/photon/Documents/QML/1.4.0/arm64/ilp64/examples/build/CMakeFiles/BigBLASExample.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/BigBLASExample.dir/depend
