# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.12)

project ("Hazel"
  DESCRIPTION "Game Engine"
  LANGUAGES "C" "CXX"
)

# Include sub-projects.
add_subdirectory ("engine")
add_subdirectory("sandbox")