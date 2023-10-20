#pragma once
#include "Circle.h"

class DllExport Helix : public Circle
{
public:
    using Circle::Circle;

    Vec GetTangentAt(double t)const override;
    Point GetPointAt(double t)const override;
    double GetLength()const override;
    CurveType GetType()const override;
};