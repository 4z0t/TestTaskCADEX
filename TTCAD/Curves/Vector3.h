#pragma once
#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <cmath>

template<typename T>
struct Vector3
{
    T x, y, z;

    Vector3 operator*(const T& value)const
    {
        return { x * value, y * value, z * value };
    }

    friend static std::ostream& operator<<(std::ostream& os, const Vector3& vec)
    {
        return os << "{ " << vec.x << ", " << vec.y << ", " << vec.z << " }";
    }
};

