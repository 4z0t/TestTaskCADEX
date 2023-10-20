cmake_minimum_required (VERSION 3.8)


add_executable (TTCAD "TTCAD.cpp" "TTCAD.h" "Curve.h" "Vector3.h" "Circle.h" "Helix.h" "Ellipse.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET TTCAD PROPERTY CXX_STANDARD 20)
endif()
