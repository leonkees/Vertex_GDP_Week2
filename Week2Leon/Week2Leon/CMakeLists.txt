# CMakeList.txt : CMake project for Week2Leon, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (Week2Leon "Week2Leon.cpp" "Week2Leon.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Week2Leon PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
