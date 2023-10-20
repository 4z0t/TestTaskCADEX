#include "Circle.h"

Circle::Circle() :Circle(0)
{

}

Circle::Circle(double radius) :m_radius(radius)
{
    if (m_radius < 0)
    {
        throw std::logic_error("Radius of the circle must be positive");
    }
}

Curve::Vec Circle::GetTangentAt(double t)const
{
    return Vec{ -std::sin(t), std::cos(t), 0 } *m_radius;
}

Curve::Point Circle::GetPointAt(double t)const
{
    return Vec{ std::cos(t),std::sin(t), 0 } *m_radius;
}

double Circle::GetLength()const
{
    return 2 * M_PI * m_radius;
}

CurveType Circle::GetType()const
{
    return CurveType::CIRCLE;
}