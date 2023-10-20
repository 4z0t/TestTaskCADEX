cmake_minimum_required (VERSION 3.8)

add_subdirectory("Curves")

add_executable (TTCAD "TTCAD.cpp" "TTCAD.h")
target_link_libraries(TTCAD PUBLIC Curves)
set_target_properties(TTCAD PROPERTIES
    CXX_STANDARD 17
)