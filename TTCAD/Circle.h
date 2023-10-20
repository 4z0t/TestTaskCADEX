#pragma once
#include "Curve.h"


class DllExport Circle : public Curve
{
public:
    Circle();
    Circle(double radius);

    Vec GetTangentAt(double t)const override;
    Point GetPointAt(double t)const override;
    double GetLength()const override;
    CurveType GetType()const override;
protected:
    double m_radius = 0;
};