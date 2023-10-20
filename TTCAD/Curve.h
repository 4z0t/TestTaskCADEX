#pragma once
#include "Vector3.h"

enum class CurveType
{
    CIRCLE,
    ELLIPSE,
    HELIX,

    TYPES_COUNT
};

class Curve
{
public:
    using Vec = Vector3<double>;
    using Point = Vector3<double>;

    virtual Vec GetTangentAt(double t)const = 0;
    virtual Point GetPointAt(double t)const = 0;
    virtual double GetLength()const = 0;
    virtual CurveType GetType()const = 0;
    virtual ~Curve() = default;
};