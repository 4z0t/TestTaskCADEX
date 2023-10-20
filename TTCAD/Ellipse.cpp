#include "Ellipse.h"

Ellipse::Ellipse() :Ellipse(0, 0)
{

}

Ellipse::Ellipse(double x_radius, double y_radius) :m_x_radius(x_radius), m_y_radius(y_radius)
{

}


Curve::Vec Ellipse::GetTangentAt(double t)const
{
    return { -std::sin(t) * m_x_radius, std::cos(t) * m_y_radius, 1 };
}

Curve::Point Ellipse::GetPointAt(double t)const
{
    return { std::cos(t) * m_x_radius, std::sin(t) * m_y_radius, 0 };
}

double Ellipse::GetLength()const
{
    return 2 * M_PI * std::sqrt((m_x_radius * m_x_radius + m_y_radius * m_y_radius) * 0.5);
}

CurveType Ellipse::GetType()const
{
    return CurveType::ELLIPSE;
}