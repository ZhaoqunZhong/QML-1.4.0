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
include CMakeFiles/MinimalExample.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MinimalExample.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MinimalExample.dir/flags.make

CMakeFiles/MinimalExample.dir/MinimalExample.cpp.o: CMakeFiles/MinimalExample.dir/flags.make
CMakeFiles/MinimalExample.dir/MinimalExample.cpp.o: ../MinimalExample.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/photon/Documents/QML/1.4.0/arm64/ilp64/examples/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MinimalExample.dir/MinimalExample.cpp.o"
	/home/photon/Android/Sdk/ndk/21.3.6528147/toolchains/llvm/prebuilt/linux-x86_64/bin/clang++ --target=aarch64-none-linux-android28 --gcc-toolchain=/home/photon/Android/Sdk/ndk/21.3.6528147/toolchains/llvm/prebuilt/linux-x86_64 --sysroot=/home/photon/Android/Sdk/ndk/21.3.6528147/toolchains/llvm/prebuilt/linux-x86_64/sysroot $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MinimalExample.dir/MinimalExample.cpp.o -c /home/photon/Documents/QML/1.4.0/arm64/ilp64/examples/MinimalExample.cpp

CMakeFiles/MinimalExample.dir/MinimalExample.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MinimalExample.dir/MinimalExample.cpp.i"
	/home/photon/Android/Sdk/ndk/21.3.6528147/toolchains/llvm/prebuilt/linux-x86_64/bin/clang++ --target=aarch64-none-linux-android28 --gcc-toolchain=/home/photon/Android/Sdk/ndk/21.3.6528147/toolchains/llvm/prebuilt/linux-x86_64 --sysroot=/home/photon/Android/Sdk/ndk/21.3.6528147/toolchains/llvm/prebuilt/linux-x86_64/sysroot $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/photon/Documents/QML/1.4.0/arm64/ilp64/examples/MinimalExample.cpp > CMakeFiles/MinimalExample.dir/MinimalExample.cpp.i

CMakeFiles/MinimalExample.dir/MinimalExample.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MinimalExample.dir/MinimalExample.cpp.s"
	/home/photon/Android/Sdk/ndk/21.3.6528147/toolchains/llvm/prebuilt/linux-x86_64/bin/clang++ --target=aarch64-none-linux-android28 --gcc-toolchain=/home/photon/Android/Sdk/ndk/21.3.6528147/toolchains/llvm/prebuilt/linux-x86_64 --sysroot=/home/photon/Android/Sdk/ndk/21.3.6528147/toolchains/llvm/prebuilt/linux-x86_64/sysroot $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/photon/Documents/QML/1.4.0/arm64/ilp64/examples/MinimalExample.cpp -o CMakeFiles/MinimalExample.dir/MinimalExample.cpp.s

CMakeFiles/MinimalExample.dir/native_debug.cpp.o: CMakeFiles/MinimalExample.dir/flags.make
CMakeFiles/MinimalExample.dir/native_debug.cpp.o: ../native_debug.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/photon/Documents/QML/1.4.0/arm64/ilp64/examples/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/MinimalExample.dir/native_debug.cpp.o"
	/home/photon/Android/Sdk/ndk/21.3.6528147/toolchains/llvm/prebuilt/linux-x86_64/bin/clang++ --target=aarch64-none-linux-android28 --gcc-toolchain=/home/photon/Android/Sdk/ndk/21.3.6528147/toolchains/llvm/prebuilt/linux-x86_64 --sysroot=/home/photon/Android/Sdk/ndk/21.3.6528147/toolchains/llvm/prebuilt/linux-x86_64/sysroot $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MinimalExample.dir/native_debug.cpp.o -c /home/photon/Documents/QML/1.4.0/arm64/ilp64/examples/native_debug.cpp

CMakeFiles/MinimalExample.dir/native_debug.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MinimalExample.dir/native_debug.cpp.i"
	/home/photon/Android/Sdk/ndk/21.3.6528147/toolchains/llvm/prebuilt/linux-x86_64/bin/clang++ --target=aarch64-none-linux-android28 --gcc-toolchain=/home/photon/Android/Sdk/ndk/21.3.6528147/toolchains/llvm/prebuilt/linux-x86_64 --sysroot=/home/photon/Android/Sdk/ndk/21.3.6528147/toolchains/llvm/prebuilt/linux-x86_64/sysroot $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/photon/Documents/QML/1.4.0/arm64/ilp64/examples/native_debug.cpp > CMakeFiles/MinimalExample.dir/native_debug.cpp.i

CMakeFiles/MinimalExample.dir/native_debug.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MinimalExample.dir/native_debug.cpp.s"
	/home/photon/Android/Sdk/ndk/21.3.6528147/toolchains/llvm/prebuilt/linux-x86_64/bin/clang++ --target=aarch64-none-linux-android28 --gcc-toolchain=/home/photon/Android/Sdk/ndk/21.3.6528147/toolchains/llvm/prebuilt/linux-x86_64 --sysroot=/home/photon/Android/Sdk/ndk/21.3.6528147/toolchains/llvm/prebuilt/linux-x86_64/sysroot $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/photon/Documents/QML/1.4.0/arm64/ilp64/examples/native_debug.cpp -o CMakeFiles/MinimalExample.dir/native_debug.cpp.s

# Object files for target MinimalExample
MinimalExample_OBJECTS = \
"CMakeFiles/MinimalExample.dir/MinimalExample.cpp.o" \
"CMakeFiles/MinimalExample.dir/native_debug.cpp.o"

# External object files for target MinimalExample
MinimalExample_EXTERNAL_OBJECTS =

MinimalExample: CMakeFiles/MinimalExample.dir/MinimalExample.cpp.o
MinimalExample: CMakeFiles/MinimalExample.dir/native_debug.cpp.o
MinimalExample: CMakeFiles/MinimalExample.dir/build.make
MinimalExample: /home/photon/Documents/QML/1.4.0/arm64/ilp64/lib/libQML-1.4.0.so
MinimalExample: CMakeFiles/MinimalExample.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/photon/Documents/QML/1.4.0/arm64/ilp64/examples/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable MinimalExample"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MinimalExample.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MinimalExample.dir/build: MinimalExample

.PHONY : CMakeFiles/MinimalExample.dir/build

CMakeFiles/MinimalExample.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MinimalExample.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MinimalExample.dir/clean

CMakeFiles/MinimalExample.dir/depend:
	cd /home/photon/Documents/QML/1.4.0/arm64/ilp64/examples/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/photon/Documents/QML/1.4.0/arm64/ilp64/examples /home/photon/Documents/QML/1.4.0/arm64/ilp64/examples /home/photon/Documents/QML/1.4.0/arm64/ilp64/examples/build /home/photon/Documents/QML/1.4.0/arm64/ilp64/examples/build /home/photon/Documents/QML/1.4.0/arm64/ilp64/examples/build/CMakeFiles/MinimalExample.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MinimalExample.dir/depend

