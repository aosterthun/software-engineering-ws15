# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.0

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/hans/Uni/SE/software-engineering-ws15

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hans/Uni/SE/software-engineering-ws15/build

# Include any dependencies generated for this target.
include CMakeFiles/Main.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Main.dir/flags.make

CMakeFiles/Main.dir/main.cpp.o: CMakeFiles/Main.dir/flags.make
CMakeFiles/Main.dir/main.cpp.o: ../main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/hans/Uni/SE/software-engineering-ws15/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/Main.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Main.dir/main.cpp.o -c /home/hans/Uni/SE/software-engineering-ws15/main.cpp

CMakeFiles/Main.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Main.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/hans/Uni/SE/software-engineering-ws15/main.cpp > CMakeFiles/Main.dir/main.cpp.i

CMakeFiles/Main.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Main.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/hans/Uni/SE/software-engineering-ws15/main.cpp -o CMakeFiles/Main.dir/main.cpp.s

CMakeFiles/Main.dir/main.cpp.o.requires:
.PHONY : CMakeFiles/Main.dir/main.cpp.o.requires

CMakeFiles/Main.dir/main.cpp.o.provides: CMakeFiles/Main.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Main.dir/build.make CMakeFiles/Main.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Main.dir/main.cpp.o.provides

CMakeFiles/Main.dir/main.cpp.o.provides.build: CMakeFiles/Main.dir/main.cpp.o

CMakeFiles/Main.dir/dollartoeuroconverter.cpp.o: CMakeFiles/Main.dir/flags.make
CMakeFiles/Main.dir/dollartoeuroconverter.cpp.o: ../dollartoeuroconverter.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/hans/Uni/SE/software-engineering-ws15/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/Main.dir/dollartoeuroconverter.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Main.dir/dollartoeuroconverter.cpp.o -c /home/hans/Uni/SE/software-engineering-ws15/dollartoeuroconverter.cpp

CMakeFiles/Main.dir/dollartoeuroconverter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Main.dir/dollartoeuroconverter.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/hans/Uni/SE/software-engineering-ws15/dollartoeuroconverter.cpp > CMakeFiles/Main.dir/dollartoeuroconverter.cpp.i

CMakeFiles/Main.dir/dollartoeuroconverter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Main.dir/dollartoeuroconverter.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/hans/Uni/SE/software-engineering-ws15/dollartoeuroconverter.cpp -o CMakeFiles/Main.dir/dollartoeuroconverter.cpp.s

CMakeFiles/Main.dir/dollartoeuroconverter.cpp.o.requires:
.PHONY : CMakeFiles/Main.dir/dollartoeuroconverter.cpp.o.requires

CMakeFiles/Main.dir/dollartoeuroconverter.cpp.o.provides: CMakeFiles/Main.dir/dollartoeuroconverter.cpp.o.requires
	$(MAKE) -f CMakeFiles/Main.dir/build.make CMakeFiles/Main.dir/dollartoeuroconverter.cpp.o.provides.build
.PHONY : CMakeFiles/Main.dir/dollartoeuroconverter.cpp.o.provides

CMakeFiles/Main.dir/dollartoeuroconverter.cpp.o.provides.build: CMakeFiles/Main.dir/dollartoeuroconverter.cpp.o

CMakeFiles/Main.dir/eurotodollarconverter.cpp.o: CMakeFiles/Main.dir/flags.make
CMakeFiles/Main.dir/eurotodollarconverter.cpp.o: ../eurotodollarconverter.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/hans/Uni/SE/software-engineering-ws15/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/Main.dir/eurotodollarconverter.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Main.dir/eurotodollarconverter.cpp.o -c /home/hans/Uni/SE/software-engineering-ws15/eurotodollarconverter.cpp

CMakeFiles/Main.dir/eurotodollarconverter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Main.dir/eurotodollarconverter.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/hans/Uni/SE/software-engineering-ws15/eurotodollarconverter.cpp > CMakeFiles/Main.dir/eurotodollarconverter.cpp.i

CMakeFiles/Main.dir/eurotodollarconverter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Main.dir/eurotodollarconverter.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/hans/Uni/SE/software-engineering-ws15/eurotodollarconverter.cpp -o CMakeFiles/Main.dir/eurotodollarconverter.cpp.s

CMakeFiles/Main.dir/eurotodollarconverter.cpp.o.requires:
.PHONY : CMakeFiles/Main.dir/eurotodollarconverter.cpp.o.requires

CMakeFiles/Main.dir/eurotodollarconverter.cpp.o.provides: CMakeFiles/Main.dir/eurotodollarconverter.cpp.o.requires
	$(MAKE) -f CMakeFiles/Main.dir/build.make CMakeFiles/Main.dir/eurotodollarconverter.cpp.o.provides.build
.PHONY : CMakeFiles/Main.dir/eurotodollarconverter.cpp.o.provides

CMakeFiles/Main.dir/eurotodollarconverter.cpp.o.provides.build: CMakeFiles/Main.dir/eurotodollarconverter.cpp.o

CMakeFiles/Main.dir/eurotodanishkroneconverter.cpp.o: CMakeFiles/Main.dir/flags.make
CMakeFiles/Main.dir/eurotodanishkroneconverter.cpp.o: ../eurotodanishkroneconverter.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/hans/Uni/SE/software-engineering-ws15/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/Main.dir/eurotodanishkroneconverter.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Main.dir/eurotodanishkroneconverter.cpp.o -c /home/hans/Uni/SE/software-engineering-ws15/eurotodanishkroneconverter.cpp

CMakeFiles/Main.dir/eurotodanishkroneconverter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Main.dir/eurotodanishkroneconverter.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/hans/Uni/SE/software-engineering-ws15/eurotodanishkroneconverter.cpp > CMakeFiles/Main.dir/eurotodanishkroneconverter.cpp.i

CMakeFiles/Main.dir/eurotodanishkroneconverter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Main.dir/eurotodanishkroneconverter.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/hans/Uni/SE/software-engineering-ws15/eurotodanishkroneconverter.cpp -o CMakeFiles/Main.dir/eurotodanishkroneconverter.cpp.s

CMakeFiles/Main.dir/eurotodanishkroneconverter.cpp.o.requires:
.PHONY : CMakeFiles/Main.dir/eurotodanishkroneconverter.cpp.o.requires

CMakeFiles/Main.dir/eurotodanishkroneconverter.cpp.o.provides: CMakeFiles/Main.dir/eurotodanishkroneconverter.cpp.o.requires
	$(MAKE) -f CMakeFiles/Main.dir/build.make CMakeFiles/Main.dir/eurotodanishkroneconverter.cpp.o.provides.build
.PHONY : CMakeFiles/Main.dir/eurotodanishkroneconverter.cpp.o.provides

CMakeFiles/Main.dir/eurotodanishkroneconverter.cpp.o.provides.build: CMakeFiles/Main.dir/eurotodanishkroneconverter.cpp.o

CMakeFiles/Main.dir/centimetertoinchesconverter.cpp.o: CMakeFiles/Main.dir/flags.make
CMakeFiles/Main.dir/centimetertoinchesconverter.cpp.o: ../centimetertoinchesconverter.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/hans/Uni/SE/software-engineering-ws15/build/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/Main.dir/centimetertoinchesconverter.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Main.dir/centimetertoinchesconverter.cpp.o -c /home/hans/Uni/SE/software-engineering-ws15/centimetertoinchesconverter.cpp

CMakeFiles/Main.dir/centimetertoinchesconverter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Main.dir/centimetertoinchesconverter.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/hans/Uni/SE/software-engineering-ws15/centimetertoinchesconverter.cpp > CMakeFiles/Main.dir/centimetertoinchesconverter.cpp.i

CMakeFiles/Main.dir/centimetertoinchesconverter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Main.dir/centimetertoinchesconverter.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/hans/Uni/SE/software-engineering-ws15/centimetertoinchesconverter.cpp -o CMakeFiles/Main.dir/centimetertoinchesconverter.cpp.s

CMakeFiles/Main.dir/centimetertoinchesconverter.cpp.o.requires:
.PHONY : CMakeFiles/Main.dir/centimetertoinchesconverter.cpp.o.requires

CMakeFiles/Main.dir/centimetertoinchesconverter.cpp.o.provides: CMakeFiles/Main.dir/centimetertoinchesconverter.cpp.o.requires
	$(MAKE) -f CMakeFiles/Main.dir/build.make CMakeFiles/Main.dir/centimetertoinchesconverter.cpp.o.provides.build
.PHONY : CMakeFiles/Main.dir/centimetertoinchesconverter.cpp.o.provides

CMakeFiles/Main.dir/centimetertoinchesconverter.cpp.o.provides.build: CMakeFiles/Main.dir/centimetertoinchesconverter.cpp.o

CMakeFiles/Main.dir/kilometertomilesconverter.cpp.o: CMakeFiles/Main.dir/flags.make
CMakeFiles/Main.dir/kilometertomilesconverter.cpp.o: ../kilometertomilesconverter.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/hans/Uni/SE/software-engineering-ws15/build/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/Main.dir/kilometertomilesconverter.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Main.dir/kilometertomilesconverter.cpp.o -c /home/hans/Uni/SE/software-engineering-ws15/kilometertomilesconverter.cpp

CMakeFiles/Main.dir/kilometertomilesconverter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Main.dir/kilometertomilesconverter.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/hans/Uni/SE/software-engineering-ws15/kilometertomilesconverter.cpp > CMakeFiles/Main.dir/kilometertomilesconverter.cpp.i

CMakeFiles/Main.dir/kilometertomilesconverter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Main.dir/kilometertomilesconverter.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/hans/Uni/SE/software-engineering-ws15/kilometertomilesconverter.cpp -o CMakeFiles/Main.dir/kilometertomilesconverter.cpp.s

CMakeFiles/Main.dir/kilometertomilesconverter.cpp.o.requires:
.PHONY : CMakeFiles/Main.dir/kilometertomilesconverter.cpp.o.requires

CMakeFiles/Main.dir/kilometertomilesconverter.cpp.o.provides: CMakeFiles/Main.dir/kilometertomilesconverter.cpp.o.requires
	$(MAKE) -f CMakeFiles/Main.dir/build.make CMakeFiles/Main.dir/kilometertomilesconverter.cpp.o.provides.build
.PHONY : CMakeFiles/Main.dir/kilometertomilesconverter.cpp.o.provides

CMakeFiles/Main.dir/kilometertomilesconverter.cpp.o.provides.build: CMakeFiles/Main.dir/kilometertomilesconverter.cpp.o

CMakeFiles/Main.dir/currencyconverter.cpp.o: CMakeFiles/Main.dir/flags.make
CMakeFiles/Main.dir/currencyconverter.cpp.o: ../currencyconverter.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/hans/Uni/SE/software-engineering-ws15/build/CMakeFiles $(CMAKE_PROGRESS_7)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/Main.dir/currencyconverter.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Main.dir/currencyconverter.cpp.o -c /home/hans/Uni/SE/software-engineering-ws15/currencyconverter.cpp

CMakeFiles/Main.dir/currencyconverter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Main.dir/currencyconverter.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/hans/Uni/SE/software-engineering-ws15/currencyconverter.cpp > CMakeFiles/Main.dir/currencyconverter.cpp.i

CMakeFiles/Main.dir/currencyconverter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Main.dir/currencyconverter.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/hans/Uni/SE/software-engineering-ws15/currencyconverter.cpp -o CMakeFiles/Main.dir/currencyconverter.cpp.s

CMakeFiles/Main.dir/currencyconverter.cpp.o.requires:
.PHONY : CMakeFiles/Main.dir/currencyconverter.cpp.o.requires

CMakeFiles/Main.dir/currencyconverter.cpp.o.provides: CMakeFiles/Main.dir/currencyconverter.cpp.o.requires
	$(MAKE) -f CMakeFiles/Main.dir/build.make CMakeFiles/Main.dir/currencyconverter.cpp.o.provides.build
.PHONY : CMakeFiles/Main.dir/currencyconverter.cpp.o.provides

CMakeFiles/Main.dir/currencyconverter.cpp.o.provides.build: CMakeFiles/Main.dir/currencyconverter.cpp.o

CMakeFiles/Main.dir/lengthconverter.cpp.o: CMakeFiles/Main.dir/flags.make
CMakeFiles/Main.dir/lengthconverter.cpp.o: ../lengthconverter.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/hans/Uni/SE/software-engineering-ws15/build/CMakeFiles $(CMAKE_PROGRESS_8)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/Main.dir/lengthconverter.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Main.dir/lengthconverter.cpp.o -c /home/hans/Uni/SE/software-engineering-ws15/lengthconverter.cpp

CMakeFiles/Main.dir/lengthconverter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Main.dir/lengthconverter.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/hans/Uni/SE/software-engineering-ws15/lengthconverter.cpp > CMakeFiles/Main.dir/lengthconverter.cpp.i

CMakeFiles/Main.dir/lengthconverter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Main.dir/lengthconverter.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/hans/Uni/SE/software-engineering-ws15/lengthconverter.cpp -o CMakeFiles/Main.dir/lengthconverter.cpp.s

CMakeFiles/Main.dir/lengthconverter.cpp.o.requires:
.PHONY : CMakeFiles/Main.dir/lengthconverter.cpp.o.requires

CMakeFiles/Main.dir/lengthconverter.cpp.o.provides: CMakeFiles/Main.dir/lengthconverter.cpp.o.requires
	$(MAKE) -f CMakeFiles/Main.dir/build.make CMakeFiles/Main.dir/lengthconverter.cpp.o.provides.build
.PHONY : CMakeFiles/Main.dir/lengthconverter.cpp.o.provides

CMakeFiles/Main.dir/lengthconverter.cpp.o.provides.build: CMakeFiles/Main.dir/lengthconverter.cpp.o

CMakeFiles/Main.dir/converter.cpp.o: CMakeFiles/Main.dir/flags.make
CMakeFiles/Main.dir/converter.cpp.o: ../converter.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/hans/Uni/SE/software-engineering-ws15/build/CMakeFiles $(CMAKE_PROGRESS_9)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/Main.dir/converter.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Main.dir/converter.cpp.o -c /home/hans/Uni/SE/software-engineering-ws15/converter.cpp

CMakeFiles/Main.dir/converter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Main.dir/converter.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/hans/Uni/SE/software-engineering-ws15/converter.cpp > CMakeFiles/Main.dir/converter.cpp.i

CMakeFiles/Main.dir/converter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Main.dir/converter.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/hans/Uni/SE/software-engineering-ws15/converter.cpp -o CMakeFiles/Main.dir/converter.cpp.s

CMakeFiles/Main.dir/converter.cpp.o.requires:
.PHONY : CMakeFiles/Main.dir/converter.cpp.o.requires

CMakeFiles/Main.dir/converter.cpp.o.provides: CMakeFiles/Main.dir/converter.cpp.o.requires
	$(MAKE) -f CMakeFiles/Main.dir/build.make CMakeFiles/Main.dir/converter.cpp.o.provides.build
.PHONY : CMakeFiles/Main.dir/converter.cpp.o.provides

CMakeFiles/Main.dir/converter.cpp.o.provides.build: CMakeFiles/Main.dir/converter.cpp.o

CMakeFiles/Main.dir/converterfactory.cpp.o: CMakeFiles/Main.dir/flags.make
CMakeFiles/Main.dir/converterfactory.cpp.o: ../converterfactory.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/hans/Uni/SE/software-engineering-ws15/build/CMakeFiles $(CMAKE_PROGRESS_10)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/Main.dir/converterfactory.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Main.dir/converterfactory.cpp.o -c /home/hans/Uni/SE/software-engineering-ws15/converterfactory.cpp

CMakeFiles/Main.dir/converterfactory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Main.dir/converterfactory.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/hans/Uni/SE/software-engineering-ws15/converterfactory.cpp > CMakeFiles/Main.dir/converterfactory.cpp.i

CMakeFiles/Main.dir/converterfactory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Main.dir/converterfactory.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/hans/Uni/SE/software-engineering-ws15/converterfactory.cpp -o CMakeFiles/Main.dir/converterfactory.cpp.s

CMakeFiles/Main.dir/converterfactory.cpp.o.requires:
.PHONY : CMakeFiles/Main.dir/converterfactory.cpp.o.requires

CMakeFiles/Main.dir/converterfactory.cpp.o.provides: CMakeFiles/Main.dir/converterfactory.cpp.o.requires
	$(MAKE) -f CMakeFiles/Main.dir/build.make CMakeFiles/Main.dir/converterfactory.cpp.o.provides.build
.PHONY : CMakeFiles/Main.dir/converterfactory.cpp.o.provides

CMakeFiles/Main.dir/converterfactory.cpp.o.provides.build: CMakeFiles/Main.dir/converterfactory.cpp.o

# Object files for target Main
Main_OBJECTS = \
"CMakeFiles/Main.dir/main.cpp.o" \
"CMakeFiles/Main.dir/dollartoeuroconverter.cpp.o" \
"CMakeFiles/Main.dir/eurotodollarconverter.cpp.o" \
"CMakeFiles/Main.dir/eurotodanishkroneconverter.cpp.o" \
"CMakeFiles/Main.dir/centimetertoinchesconverter.cpp.o" \
"CMakeFiles/Main.dir/kilometertomilesconverter.cpp.o" \
"CMakeFiles/Main.dir/currencyconverter.cpp.o" \
"CMakeFiles/Main.dir/lengthconverter.cpp.o" \
"CMakeFiles/Main.dir/converter.cpp.o" \
"CMakeFiles/Main.dir/converterfactory.cpp.o"

# External object files for target Main
Main_EXTERNAL_OBJECTS =

Main: CMakeFiles/Main.dir/main.cpp.o
Main: CMakeFiles/Main.dir/dollartoeuroconverter.cpp.o
Main: CMakeFiles/Main.dir/eurotodollarconverter.cpp.o
Main: CMakeFiles/Main.dir/eurotodanishkroneconverter.cpp.o
Main: CMakeFiles/Main.dir/centimetertoinchesconverter.cpp.o
Main: CMakeFiles/Main.dir/kilometertomilesconverter.cpp.o
Main: CMakeFiles/Main.dir/currencyconverter.cpp.o
Main: CMakeFiles/Main.dir/lengthconverter.cpp.o
Main: CMakeFiles/Main.dir/converter.cpp.o
Main: CMakeFiles/Main.dir/converterfactory.cpp.o
Main: CMakeFiles/Main.dir/build.make
Main: CMakeFiles/Main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable Main"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Main.dir/build: Main
.PHONY : CMakeFiles/Main.dir/build

CMakeFiles/Main.dir/requires: CMakeFiles/Main.dir/main.cpp.o.requires
CMakeFiles/Main.dir/requires: CMakeFiles/Main.dir/dollartoeuroconverter.cpp.o.requires
CMakeFiles/Main.dir/requires: CMakeFiles/Main.dir/eurotodollarconverter.cpp.o.requires
CMakeFiles/Main.dir/requires: CMakeFiles/Main.dir/eurotodanishkroneconverter.cpp.o.requires
CMakeFiles/Main.dir/requires: CMakeFiles/Main.dir/centimetertoinchesconverter.cpp.o.requires
CMakeFiles/Main.dir/requires: CMakeFiles/Main.dir/kilometertomilesconverter.cpp.o.requires
CMakeFiles/Main.dir/requires: CMakeFiles/Main.dir/currencyconverter.cpp.o.requires
CMakeFiles/Main.dir/requires: CMakeFiles/Main.dir/lengthconverter.cpp.o.requires
CMakeFiles/Main.dir/requires: CMakeFiles/Main.dir/converter.cpp.o.requires
CMakeFiles/Main.dir/requires: CMakeFiles/Main.dir/converterfactory.cpp.o.requires
.PHONY : CMakeFiles/Main.dir/requires

CMakeFiles/Main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Main.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Main.dir/clean

CMakeFiles/Main.dir/depend:
	cd /home/hans/Uni/SE/software-engineering-ws15/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hans/Uni/SE/software-engineering-ws15 /home/hans/Uni/SE/software-engineering-ws15 /home/hans/Uni/SE/software-engineering-ws15/build /home/hans/Uni/SE/software-engineering-ws15/build /home/hans/Uni/SE/software-engineering-ws15/build/CMakeFiles/Main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Main.dir/depend

