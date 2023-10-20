#pragma once
#include "Circle.h"


class Helix : public Circle
{
public:
    using Circle::Circle;

    virtual Vec GetTangentAt(double t)const override
    {
        return { -std::sin(t) * m_radius, std::cos(t) * m_radius, 1 };
    }

    virtual Point GetPointAt(double t)const override
    {
        return { std::cos(t) * m_radius, std::sin(t) * m_radius, t };
    }

    virtual double GetLength()const override
    {
        return 2 * M_PI * std::sqrt(m_radius * m_radius + 1);
    }

    virtual CurveType GetType()const override
    {
        return CurveType::HELIX;
    }
};