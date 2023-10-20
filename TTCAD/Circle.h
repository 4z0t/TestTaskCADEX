#pragma once
#include "Curve.h"


class Circle : public Curve
{
public:
    Circle() :Circle(0)
    {

    }

    Circle(double radius) :m_radius(radius)
    {

    }

    virtual Vec GetTangentAt(double t)const override
    {
        return Vec{ -std::sin(t), std::cos(t), 0 } * m_radius;
    }

    virtual Point GetPointAt(double t)const override
    {
        return Vec{ std::cos(t),std::sin(t), 0 } * m_radius;
    }

    virtual double GetLength()const override
    {
        return 2 * M_PI * m_radius;
    }

    virtual CurveType GetType()const override
    {
        return CurveType::CIRCLE;
    }
protected:
    double m_radius = 0;
};