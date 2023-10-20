#pragma once
#include "Curve.h"

class DllExport Ellipse : public Curve
{
public:

    Ellipse();
    Ellipse(double x_radius, double y_radius);

    virtual Vec GetTangentAt(double t)const override;
    virtual Point GetPointAt(double t)const override;
    virtual double GetLength()const override;
    virtual CurveType GetType()const override;

protected:
    double m_x_radius = 0;
    double m_y_radius = 0;
};