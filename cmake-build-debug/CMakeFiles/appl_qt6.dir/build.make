# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.25

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2022.2.4\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2022.2.4\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\jorka\CLionProjects\gemetric_calc

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\jorka\CLionProjects\gemetric_calc\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/appl_qt6.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/appl_qt6.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/appl_qt6.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/appl_qt6.dir/flags.make

qrc_resources.cpp: C:/Users/jorka/CLionProjects/gemetric_calc/resources.qrc
qrc_resources.cpp: C:/Users/jorka/CLionProjects/gemetric_calc/img/graph.png
qrc_resources.cpp: resources.qrc.depends
qrc_resources.cpp: C:/Qt6/6.5.1/mingw_64/./bin/rcc.exe
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=C:\Users\jorka\CLionProjects\gemetric_calc\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating qrc_resources.cpp"
	C:\Qt6\6.5.1\mingw_64\bin\rcc.exe --no-zstd --name resources --output C:/Users/jorka/CLionProjects/gemetric_calc/cmake-build-debug/qrc_resources.cpp C:/Users/jorka/CLionProjects/gemetric_calc/resources.qrc

CMakeFiles/appl_qt6.dir/appl_qt6_autogen/mocs_compilation.cpp.obj: CMakeFiles/appl_qt6.dir/flags.make
CMakeFiles/appl_qt6.dir/appl_qt6_autogen/mocs_compilation.cpp.obj: CMakeFiles/appl_qt6.dir/includes_CXX.rsp
CMakeFiles/appl_qt6.dir/appl_qt6_autogen/mocs_compilation.cpp.obj: appl_qt6_autogen/mocs_compilation.cpp
CMakeFiles/appl_qt6.dir/appl_qt6_autogen/mocs_compilation.cpp.obj: CMakeFiles/appl_qt6.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\jorka\CLionProjects\gemetric_calc\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/appl_qt6.dir/appl_qt6_autogen/mocs_compilation.cpp.obj"
	C:\Qt6\Tools\mingw1120_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/appl_qt6.dir/appl_qt6_autogen/mocs_compilation.cpp.obj -MF CMakeFiles\appl_qt6.dir\appl_qt6_autogen\mocs_compilation.cpp.obj.d -o CMakeFiles\appl_qt6.dir\appl_qt6_autogen\mocs_compilation.cpp.obj -c C:\Users\jorka\CLionProjects\gemetric_calc\cmake-build-debug\appl_qt6_autogen\mocs_compilation.cpp

CMakeFiles/appl_qt6.dir/appl_qt6_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/appl_qt6.dir/appl_qt6_autogen/mocs_compilation.cpp.i"
	C:\Qt6\Tools\mingw1120_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\jorka\CLionProjects\gemetric_calc\cmake-build-debug\appl_qt6_autogen\mocs_compilation.cpp > CMakeFiles\appl_qt6.dir\appl_qt6_autogen\mocs_compilation.cpp.i

CMakeFiles/appl_qt6.dir/appl_qt6_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/appl_qt6.dir/appl_qt6_autogen/mocs_compilation.cpp.s"
	C:\Qt6\Tools\mingw1120_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\jorka\CLionProjects\gemetric_calc\cmake-build-debug\appl_qt6_autogen\mocs_compilation.cpp -o CMakeFiles\appl_qt6.dir\appl_qt6_autogen\mocs_compilation.cpp.s

CMakeFiles/appl_qt6.dir/main.cpp.obj: CMakeFiles/appl_qt6.dir/flags.make
CMakeFiles/appl_qt6.dir/main.cpp.obj: CMakeFiles/appl_qt6.dir/includes_CXX.rsp
CMakeFiles/appl_qt6.dir/main.cpp.obj: C:/Users/jorka/CLionProjects/gemetric_calc/main.cpp
CMakeFiles/appl_qt6.dir/main.cpp.obj: CMakeFiles/appl_qt6.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\jorka\CLionProjects\gemetric_calc\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/appl_qt6.dir/main.cpp.obj"
	C:\Qt6\Tools\mingw1120_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/appl_qt6.dir/main.cpp.obj -MF CMakeFiles\appl_qt6.dir\main.cpp.obj.d -o CMakeFiles\appl_qt6.dir\main.cpp.obj -c C:\Users\jorka\CLionProjects\gemetric_calc\main.cpp

CMakeFiles/appl_qt6.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/appl_qt6.dir/main.cpp.i"
	C:\Qt6\Tools\mingw1120_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\jorka\CLionProjects\gemetric_calc\main.cpp > CMakeFiles\appl_qt6.dir\main.cpp.i

CMakeFiles/appl_qt6.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/appl_qt6.dir/main.cpp.s"
	C:\Qt6\Tools\mingw1120_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\jorka\CLionProjects\gemetric_calc\main.cpp -o CMakeFiles\appl_qt6.dir\main.cpp.s

CMakeFiles/appl_qt6.dir/src/widgets/sources/mainwindow.cpp.obj: CMakeFiles/appl_qt6.dir/flags.make
CMakeFiles/appl_qt6.dir/src/widgets/sources/mainwindow.cpp.obj: CMakeFiles/appl_qt6.dir/includes_CXX.rsp
CMakeFiles/appl_qt6.dir/src/widgets/sources/mainwindow.cpp.obj: C:/Users/jorka/CLionProjects/gemetric_calc/src/widgets/sources/mainwindow.cpp
CMakeFiles/appl_qt6.dir/src/widgets/sources/mainwindow.cpp.obj: CMakeFiles/appl_qt6.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\jorka\CLionProjects\gemetric_calc\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/appl_qt6.dir/src/widgets/sources/mainwindow.cpp.obj"
	C:\Qt6\Tools\mingw1120_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/appl_qt6.dir/src/widgets/sources/mainwindow.cpp.obj -MF CMakeFiles\appl_qt6.dir\src\widgets\sources\mainwindow.cpp.obj.d -o CMakeFiles\appl_qt6.dir\src\widgets\sources\mainwindow.cpp.obj -c C:\Users\jorka\CLionProjects\gemetric_calc\src\widgets\sources\mainwindow.cpp

CMakeFiles/appl_qt6.dir/src/widgets/sources/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/appl_qt6.dir/src/widgets/sources/mainwindow.cpp.i"
	C:\Qt6\Tools\mingw1120_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\jorka\CLionProjects\gemetric_calc\src\widgets\sources\mainwindow.cpp > CMakeFiles\appl_qt6.dir\src\widgets\sources\mainwindow.cpp.i

CMakeFiles/appl_qt6.dir/src/widgets/sources/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/appl_qt6.dir/src/widgets/sources/mainwindow.cpp.s"
	C:\Qt6\Tools\mingw1120_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\jorka\CLionProjects\gemetric_calc\src\widgets\sources\mainwindow.cpp -o CMakeFiles\appl_qt6.dir\src\widgets\sources\mainwindow.cpp.s

CMakeFiles/appl_qt6.dir/src/widgets/sources/graphwindow.cpp.obj: CMakeFiles/appl_qt6.dir/flags.make
CMakeFiles/appl_qt6.dir/src/widgets/sources/graphwindow.cpp.obj: CMakeFiles/appl_qt6.dir/includes_CXX.rsp
CMakeFiles/appl_qt6.dir/src/widgets/sources/graphwindow.cpp.obj: C:/Users/jorka/CLionProjects/gemetric_calc/src/widgets/sources/graphwindow.cpp
CMakeFiles/appl_qt6.dir/src/widgets/sources/graphwindow.cpp.obj: CMakeFiles/appl_qt6.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\jorka\CLionProjects\gemetric_calc\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/appl_qt6.dir/src/widgets/sources/graphwindow.cpp.obj"
	C:\Qt6\Tools\mingw1120_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/appl_qt6.dir/src/widgets/sources/graphwindow.cpp.obj -MF CMakeFiles\appl_qt6.dir\src\widgets\sources\graphwindow.cpp.obj.d -o CMakeFiles\appl_qt6.dir\src\widgets\sources\graphwindow.cpp.obj -c C:\Users\jorka\CLionProjects\gemetric_calc\src\widgets\sources\graphwindow.cpp

CMakeFiles/appl_qt6.dir/src/widgets/sources/graphwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/appl_qt6.dir/src/widgets/sources/graphwindow.cpp.i"
	C:\Qt6\Tools\mingw1120_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\jorka\CLionProjects\gemetric_calc\src\widgets\sources\graphwindow.cpp > CMakeFiles\appl_qt6.dir\src\widgets\sources\graphwindow.cpp.i

CMakeFiles/appl_qt6.dir/src/widgets/sources/graphwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/appl_qt6.dir/src/widgets/sources/graphwindow.cpp.s"
	C:\Qt6\Tools\mingw1120_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\jorka\CLionProjects\gemetric_calc\src\widgets\sources\graphwindow.cpp -o CMakeFiles\appl_qt6.dir\src\widgets\sources\graphwindow.cpp.s

CMakeFiles/appl_qt6.dir/src/widgets/sources/intersectwindow.cpp.obj: CMakeFiles/appl_qt6.dir/flags.make
CMakeFiles/appl_qt6.dir/src/widgets/sources/intersectwindow.cpp.obj: CMakeFiles/appl_qt6.dir/includes_CXX.rsp
CMakeFiles/appl_qt6.dir/src/widgets/sources/intersectwindow.cpp.obj: C:/Users/jorka/CLionProjects/gemetric_calc/src/widgets/sources/intersectwindow.cpp
CMakeFiles/appl_qt6.dir/src/widgets/sources/intersectwindow.cpp.obj: CMakeFiles/appl_qt6.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\jorka\CLionProjects\gemetric_calc\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/appl_qt6.dir/src/widgets/sources/intersectwindow.cpp.obj"
	C:\Qt6\Tools\mingw1120_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/appl_qt6.dir/src/widgets/sources/intersectwindow.cpp.obj -MF CMakeFiles\appl_qt6.dir\src\widgets\sources\intersectwindow.cpp.obj.d -o CMakeFiles\appl_qt6.dir\src\widgets\sources\intersectwindow.cpp.obj -c C:\Users\jorka\CLionProjects\gemetric_calc\src\widgets\sources\intersectwindow.cpp

CMakeFiles/appl_qt6.dir/src/widgets/sources/intersectwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/appl_qt6.dir/src/widgets/sources/intersectwindow.cpp.i"
	C:\Qt6\Tools\mingw1120_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\jorka\CLionProjects\gemetric_calc\src\widgets\sources\intersectwindow.cpp > CMakeFiles\appl_qt6.dir\src\widgets\sources\intersectwindow.cpp.i

CMakeFiles/appl_qt6.dir/src/widgets/sources/intersectwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/appl_qt6.dir/src/widgets/sources/intersectwindow.cpp.s"
	C:\Qt6\Tools\mingw1120_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\jorka\CLionProjects\gemetric_calc\src\widgets\sources\intersectwindow.cpp -o CMakeFiles\appl_qt6.dir\src\widgets\sources\intersectwindow.cpp.s

CMakeFiles/appl_qt6.dir/src/widgets/sources/angelwindow.cpp.obj: CMakeFiles/appl_qt6.dir/flags.make
CMakeFiles/appl_qt6.dir/src/widgets/sources/angelwindow.cpp.obj: CMakeFiles/appl_qt6.dir/includes_CXX.rsp
CMakeFiles/appl_qt6.dir/src/widgets/sources/angelwindow.cpp.obj: C:/Users/jorka/CLionProjects/gemetric_calc/src/widgets/sources/angelwindow.cpp
CMakeFiles/appl_qt6.dir/src/widgets/sources/angelwindow.cpp.obj: CMakeFiles/appl_qt6.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\jorka\CLionProjects\gemetric_calc\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/appl_qt6.dir/src/widgets/sources/angelwindow.cpp.obj"
	C:\Qt6\Tools\mingw1120_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/appl_qt6.dir/src/widgets/sources/angelwindow.cpp.obj -MF CMakeFiles\appl_qt6.dir\src\widgets\sources\angelwindow.cpp.obj.d -o CMakeFiles\appl_qt6.dir\src\widgets\sources\angelwindow.cpp.obj -c C:\Users\jorka\CLionProjects\gemetric_calc\src\widgets\sources\angelwindow.cpp

CMakeFiles/appl_qt6.dir/src/widgets/sources/angelwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/appl_qt6.dir/src/widgets/sources/angelwindow.cpp.i"
	C:\Qt6\Tools\mingw1120_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\jorka\CLionProjects\gemetric_calc\src\widgets\sources\angelwindow.cpp > CMakeFiles\appl_qt6.dir\src\widgets\sources\angelwindow.cpp.i

CMakeFiles/appl_qt6.dir/src/widgets/sources/angelwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/appl_qt6.dir/src/widgets/sources/angelwindow.cpp.s"
	C:\Qt6\Tools\mingw1120_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\jorka\CLionProjects\gemetric_calc\src\widgets\sources\angelwindow.cpp -o CMakeFiles\appl_qt6.dir\src\widgets\sources\angelwindow.cpp.s

CMakeFiles/appl_qt6.dir/src/widgets/sources/distancewindow.cpp.obj: CMakeFiles/appl_qt6.dir/flags.make
CMakeFiles/appl_qt6.dir/src/widgets/sources/distancewindow.cpp.obj: CMakeFiles/appl_qt6.dir/includes_CXX.rsp
CMakeFiles/appl_qt6.dir/src/widgets/sources/distancewindow.cpp.obj: C:/Users/jorka/CLionProjects/gemetric_calc/src/widgets/sources/distancewindow.cpp
CMakeFiles/appl_qt6.dir/src/widgets/sources/distancewindow.cpp.obj: CMakeFiles/appl_qt6.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\jorka\CLionProjects\gemetric_calc\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/appl_qt6.dir/src/widgets/sources/distancewindow.cpp.obj"
	C:\Qt6\Tools\mingw1120_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/appl_qt6.dir/src/widgets/sources/distancewindow.cpp.obj -MF CMakeFiles\appl_qt6.dir\src\widgets\sources\distancewindow.cpp.obj.d -o CMakeFiles\appl_qt6.dir\src\widgets\sources\distancewindow.cpp.obj -c C:\Users\jorka\CLionProjects\gemetric_calc\src\widgets\sources\distancewindow.cpp

CMakeFiles/appl_qt6.dir/src/widgets/sources/distancewindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/appl_qt6.dir/src/widgets/sources/distancewindow.cpp.i"
	C:\Qt6\Tools\mingw1120_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\jorka\CLionProjects\gemetric_calc\src\widgets\sources\distancewindow.cpp > CMakeFiles\appl_qt6.dir\src\widgets\sources\distancewindow.cpp.i

CMakeFiles/appl_qt6.dir/src/widgets/sources/distancewindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/appl_qt6.dir/src/widgets/sources/distancewindow.cpp.s"
	C:\Qt6\Tools\mingw1120_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\jorka\CLionProjects\gemetric_calc\src\widgets\sources\distancewindow.cpp -o CMakeFiles\appl_qt6.dir\src\widgets\sources\distancewindow.cpp.s

CMakeFiles/appl_qt6.dir/src/widgets/sources/operatorwindow.cpp.obj: CMakeFiles/appl_qt6.dir/flags.make
CMakeFiles/appl_qt6.dir/src/widgets/sources/operatorwindow.cpp.obj: CMakeFiles/appl_qt6.dir/includes_CXX.rsp
CMakeFiles/appl_qt6.dir/src/widgets/sources/operatorwindow.cpp.obj: C:/Users/jorka/CLionProjects/gemetric_calc/src/widgets/sources/operatorwindow.cpp
CMakeFiles/appl_qt6.dir/src/widgets/sources/operatorwindow.cpp.obj: CMakeFiles/appl_qt6.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\jorka\CLionProjects\gemetric_calc\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/appl_qt6.dir/src/widgets/sources/operatorwindow.cpp.obj"
	C:\Qt6\Tools\mingw1120_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/appl_qt6.dir/src/widgets/sources/operatorwindow.cpp.obj -MF CMakeFiles\appl_qt6.dir\src\widgets\sources\operatorwindow.cpp.obj.d -o CMakeFiles\appl_qt6.dir\src\widgets\sources\operatorwindow.cpp.obj -c C:\Users\jorka\CLionProjects\gemetric_calc\src\widgets\sources\operatorwindow.cpp

CMakeFiles/appl_qt6.dir/src/widgets/sources/operatorwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/appl_qt6.dir/src/widgets/sources/operatorwindow.cpp.i"
	C:\Qt6\Tools\mingw1120_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\jorka\CLionProjects\gemetric_calc\src\widgets\sources\operatorwindow.cpp > CMakeFiles\appl_qt6.dir\src\widgets\sources\operatorwindow.cpp.i

CMakeFiles/appl_qt6.dir/src/widgets/sources/operatorwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/appl_qt6.dir/src/widgets/sources/operatorwindow.cpp.s"
	C:\Qt6\Tools\mingw1120_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\jorka\CLionProjects\gemetric_calc\src\widgets\sources\operatorwindow.cpp -o CMakeFiles\appl_qt6.dir\src\widgets\sources\operatorwindow.cpp.s

CMakeFiles/appl_qt6.dir/src/lib/figures.cpp.obj: CMakeFiles/appl_qt6.dir/flags.make
CMakeFiles/appl_qt6.dir/src/lib/figures.cpp.obj: CMakeFiles/appl_qt6.dir/includes_CXX.rsp
CMakeFiles/appl_qt6.dir/src/lib/figures.cpp.obj: C:/Users/jorka/CLionProjects/gemetric_calc/src/lib/figures.cpp
CMakeFiles/appl_qt6.dir/src/lib/figures.cpp.obj: CMakeFiles/appl_qt6.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\jorka\CLionProjects\gemetric_calc\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/appl_qt6.dir/src/lib/figures.cpp.obj"
	C:\Qt6\Tools\mingw1120_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/appl_qt6.dir/src/lib/figures.cpp.obj -MF CMakeFiles\appl_qt6.dir\src\lib\figures.cpp.obj.d -o CMakeFiles\appl_qt6.dir\src\lib\figures.cpp.obj -c C:\Users\jorka\CLionProjects\gemetric_calc\src\lib\figures.cpp

CMakeFiles/appl_qt6.dir/src/lib/figures.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/appl_qt6.dir/src/lib/figures.cpp.i"
	C:\Qt6\Tools\mingw1120_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\jorka\CLionProjects\gemetric_calc\src\lib\figures.cpp > CMakeFiles\appl_qt6.dir\src\lib\figures.cpp.i

CMakeFiles/appl_qt6.dir/src/lib/figures.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/appl_qt6.dir/src/lib/figures.cpp.s"
	C:\Qt6\Tools\mingw1120_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\jorka\CLionProjects\gemetric_calc\src\lib\figures.cpp -o CMakeFiles\appl_qt6.dir\src\lib\figures.cpp.s

CMakeFiles/appl_qt6.dir/qrc_resources.cpp.obj: CMakeFiles/appl_qt6.dir/flags.make
CMakeFiles/appl_qt6.dir/qrc_resources.cpp.obj: CMakeFiles/appl_qt6.dir/includes_CXX.rsp
CMakeFiles/appl_qt6.dir/qrc_resources.cpp.obj: qrc_resources.cpp
CMakeFiles/appl_qt6.dir/qrc_resources.cpp.obj: CMakeFiles/appl_qt6.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\jorka\CLionProjects\gemetric_calc\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/appl_qt6.dir/qrc_resources.cpp.obj"
	C:\Qt6\Tools\mingw1120_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/appl_qt6.dir/qrc_resources.cpp.obj -MF CMakeFiles\appl_qt6.dir\qrc_resources.cpp.obj.d -o CMakeFiles\appl_qt6.dir\qrc_resources.cpp.obj -c C:\Users\jorka\CLionProjects\gemetric_calc\cmake-build-debug\qrc_resources.cpp

CMakeFiles/appl_qt6.dir/qrc_resources.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/appl_qt6.dir/qrc_resources.cpp.i"
	C:\Qt6\Tools\mingw1120_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\jorka\CLionProjects\gemetric_calc\cmake-build-debug\qrc_resources.cpp > CMakeFiles\appl_qt6.dir\qrc_resources.cpp.i

CMakeFiles/appl_qt6.dir/qrc_resources.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/appl_qt6.dir/qrc_resources.cpp.s"
	C:\Qt6\Tools\mingw1120_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\jorka\CLionProjects\gemetric_calc\cmake-build-debug\qrc_resources.cpp -o CMakeFiles\appl_qt6.dir\qrc_resources.cpp.s

# Object files for target appl_qt6
appl_qt6_OBJECTS = \
"CMakeFiles/appl_qt6.dir/appl_qt6_autogen/mocs_compilation.cpp.obj" \
"CMakeFiles/appl_qt6.dir/main.cpp.obj" \
"CMakeFiles/appl_qt6.dir/src/widgets/sources/mainwindow.cpp.obj" \
"CMakeFiles/appl_qt6.dir/src/widgets/sources/graphwindow.cpp.obj" \
"CMakeFiles/appl_qt6.dir/src/widgets/sources/intersectwindow.cpp.obj" \
"CMakeFiles/appl_qt6.dir/src/widgets/sources/angelwindow.cpp.obj" \
"CMakeFiles/appl_qt6.dir/src/widgets/sources/distancewindow.cpp.obj" \
"CMakeFiles/appl_qt6.dir/src/widgets/sources/operatorwindow.cpp.obj" \
"CMakeFiles/appl_qt6.dir/src/lib/figures.cpp.obj" \
"CMakeFiles/appl_qt6.dir/qrc_resources.cpp.obj"

# External object files for target appl_qt6
appl_qt6_EXTERNAL_OBJECTS =

appl_qt6.exe: CMakeFiles/appl_qt6.dir/appl_qt6_autogen/mocs_compilation.cpp.obj
appl_qt6.exe: CMakeFiles/appl_qt6.dir/main.cpp.obj
appl_qt6.exe: CMakeFiles/appl_qt6.dir/src/widgets/sources/mainwindow.cpp.obj
appl_qt6.exe: CMakeFiles/appl_qt6.dir/src/widgets/sources/graphwindow.cpp.obj
appl_qt6.exe: CMakeFiles/appl_qt6.dir/src/widgets/sources/intersectwindow.cpp.obj
appl_qt6.exe: CMakeFiles/appl_qt6.dir/src/widgets/sources/angelwindow.cpp.obj
appl_qt6.exe: CMakeFiles/appl_qt6.dir/src/widgets/sources/distancewindow.cpp.obj
appl_qt6.exe: CMakeFiles/appl_qt6.dir/src/widgets/sources/operatorwindow.cpp.obj
appl_qt6.exe: CMakeFiles/appl_qt6.dir/src/lib/figures.cpp.obj
appl_qt6.exe: CMakeFiles/appl_qt6.dir/qrc_resources.cpp.obj
appl_qt6.exe: CMakeFiles/appl_qt6.dir/build.make
appl_qt6.exe: C:/Qt6/6.5.1/mingw_64/lib/libQt6Widgets.a
appl_qt6.exe: C:/Qt6/6.5.1/mingw_64/lib/libQt6Gui.a
appl_qt6.exe: C:/Qt6/6.5.1/mingw_64/lib/libQt6Core.a
appl_qt6.exe: C:/Qt6/6.5.1/mingw_64/lib/libQt6EntryPoint.a
appl_qt6.exe: CMakeFiles/appl_qt6.dir/linkLibs.rsp
appl_qt6.exe: CMakeFiles/appl_qt6.dir/objects1
appl_qt6.exe: CMakeFiles/appl_qt6.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\jorka\CLionProjects\gemetric_calc\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Linking CXX executable appl_qt6.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\appl_qt6.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/appl_qt6.dir/build: appl_qt6.exe
.PHONY : CMakeFiles/appl_qt6.dir/build

CMakeFiles/appl_qt6.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\appl_qt6.dir\cmake_clean.cmake
.PHONY : CMakeFiles/appl_qt6.dir/clean

CMakeFiles/appl_qt6.dir/depend: qrc_resources.cpp
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\jorka\CLionProjects\gemetric_calc C:\Users\jorka\CLionProjects\gemetric_calc C:\Users\jorka\CLionProjects\gemetric_calc\cmake-build-debug C:\Users\jorka\CLionProjects\gemetric_calc\cmake-build-debug C:\Users\jorka\CLionProjects\gemetric_calc\cmake-build-debug\CMakeFiles\appl_qt6.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/appl_qt6.dir/depend

