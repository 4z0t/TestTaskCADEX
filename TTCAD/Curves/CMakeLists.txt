add_library(Curves SHARED "Curves.hpp" "Circle.cpp" "Helix.cpp" "Ellipse.cpp")
target_compile_definitions(Curves PRIVATE BUILD_DLL)
