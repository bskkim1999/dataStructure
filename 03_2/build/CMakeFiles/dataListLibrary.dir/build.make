# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.30

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\step\Desktop\TEST_folder\dataStructure\03_2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\step\Desktop\TEST_folder\dataStructure\03_2\build

# Include any dependencies generated for this target.
include CMakeFiles/dataListLibrary.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/dataListLibrary.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/dataListLibrary.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/dataListLibrary.dir/flags.make

CMakeFiles/dataListLibrary.dir/Source/ArrayList.c.obj: CMakeFiles/dataListLibrary.dir/flags.make
CMakeFiles/dataListLibrary.dir/Source/ArrayList.c.obj: CMakeFiles/dataListLibrary.dir/includes_C.rsp
CMakeFiles/dataListLibrary.dir/Source/ArrayList.c.obj: C:/Users/step/Desktop/TEST_folder/dataStructure/03_2/Source/ArrayList.c
CMakeFiles/dataListLibrary.dir/Source/ArrayList.c.obj: CMakeFiles/dataListLibrary.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\step\Desktop\TEST_folder\dataStructure\03_2\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/dataListLibrary.dir/Source/ArrayList.c.obj"
	C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/dataListLibrary.dir/Source/ArrayList.c.obj -MF CMakeFiles\dataListLibrary.dir\Source\ArrayList.c.obj.d -o CMakeFiles\dataListLibrary.dir\Source\ArrayList.c.obj -c C:\Users\step\Desktop\TEST_folder\dataStructure\03_2\Source\ArrayList.c

CMakeFiles/dataListLibrary.dir/Source/ArrayList.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/dataListLibrary.dir/Source/ArrayList.c.i"
	C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\step\Desktop\TEST_folder\dataStructure\03_2\Source\ArrayList.c > CMakeFiles\dataListLibrary.dir\Source\ArrayList.c.i

CMakeFiles/dataListLibrary.dir/Source/ArrayList.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/dataListLibrary.dir/Source/ArrayList.c.s"
	C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\step\Desktop\TEST_folder\dataStructure\03_2\Source\ArrayList.c -o CMakeFiles\dataListLibrary.dir\Source\ArrayList.c.s

CMakeFiles/dataListLibrary.dir/Source/NameCard.c.obj: CMakeFiles/dataListLibrary.dir/flags.make
CMakeFiles/dataListLibrary.dir/Source/NameCard.c.obj: CMakeFiles/dataListLibrary.dir/includes_C.rsp
CMakeFiles/dataListLibrary.dir/Source/NameCard.c.obj: C:/Users/step/Desktop/TEST_folder/dataStructure/03_2/Source/NameCard.c
CMakeFiles/dataListLibrary.dir/Source/NameCard.c.obj: CMakeFiles/dataListLibrary.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\step\Desktop\TEST_folder\dataStructure\03_2\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/dataListLibrary.dir/Source/NameCard.c.obj"
	C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/dataListLibrary.dir/Source/NameCard.c.obj -MF CMakeFiles\dataListLibrary.dir\Source\NameCard.c.obj.d -o CMakeFiles\dataListLibrary.dir\Source\NameCard.c.obj -c C:\Users\step\Desktop\TEST_folder\dataStructure\03_2\Source\NameCard.c

CMakeFiles/dataListLibrary.dir/Source/NameCard.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/dataListLibrary.dir/Source/NameCard.c.i"
	C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\step\Desktop\TEST_folder\dataStructure\03_2\Source\NameCard.c > CMakeFiles\dataListLibrary.dir\Source\NameCard.c.i

CMakeFiles/dataListLibrary.dir/Source/NameCard.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/dataListLibrary.dir/Source/NameCard.c.s"
	C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\step\Desktop\TEST_folder\dataStructure\03_2\Source\NameCard.c -o CMakeFiles\dataListLibrary.dir\Source\NameCard.c.s

# Object files for target dataListLibrary
dataListLibrary_OBJECTS = \
"CMakeFiles/dataListLibrary.dir/Source/ArrayList.c.obj" \
"CMakeFiles/dataListLibrary.dir/Source/NameCard.c.obj"

# External object files for target dataListLibrary
dataListLibrary_EXTERNAL_OBJECTS =

libdataListLibrary.a: CMakeFiles/dataListLibrary.dir/Source/ArrayList.c.obj
libdataListLibrary.a: CMakeFiles/dataListLibrary.dir/Source/NameCard.c.obj
libdataListLibrary.a: CMakeFiles/dataListLibrary.dir/build.make
libdataListLibrary.a: CMakeFiles/dataListLibrary.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\step\Desktop\TEST_folder\dataStructure\03_2\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C static library libdataListLibrary.a"
	$(CMAKE_COMMAND) -P CMakeFiles\dataListLibrary.dir\cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\dataListLibrary.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/dataListLibrary.dir/build: libdataListLibrary.a
.PHONY : CMakeFiles/dataListLibrary.dir/build

CMakeFiles/dataListLibrary.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\dataListLibrary.dir\cmake_clean.cmake
.PHONY : CMakeFiles/dataListLibrary.dir/clean

CMakeFiles/dataListLibrary.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\step\Desktop\TEST_folder\dataStructure\03_2 C:\Users\step\Desktop\TEST_folder\dataStructure\03_2 C:\Users\step\Desktop\TEST_folder\dataStructure\03_2\build C:\Users\step\Desktop\TEST_folder\dataStructure\03_2\build C:\Users\step\Desktop\TEST_folder\dataStructure\03_2\build\CMakeFiles\dataListLibrary.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/dataListLibrary.dir/depend

