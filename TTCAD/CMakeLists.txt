cmake_minimum_required (VERSION 3.8)

add_library(Curves SHARED 
    Curves/Curves.hpp
    Curves/Circle.cpp
    Curves/Helix.cpp
    Curves/Ellipse.cpp
)
target_compile_definitions(Curves PRIVATE BUILD_DLL)

add_executable (TTCAD "TTCAD.cpp" "TTCAD.h")
target_link_libraries(TTCAD PUBLIC Curves)
set_target_properties(TTCAD PROPERTIES
    CXX_STANDARD 17
)