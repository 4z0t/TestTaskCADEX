#pragma once
#include "Curve.h"


class DllExport Circle : public Curve
{
public:
    Circle();
    Circle(double radius);

    virtual Vec GetTangentAt(double t)const override;
    virtual Point GetPointAt(double t)const override;
    virtual double GetLength()const override;
    virtual CurveType GetType()const override;
protected:
    double m_radius = 0;
};