#include "Helix.h"

Curve::Vec Helix::GetTangentAt(double t)const
{
    return { -std::sin(t) * m_radius, std::cos(t) * m_radius, 1 };
}

Curve::Point Helix::GetPointAt(double t)const
{
    return { std::cos(t) * m_radius, std::sin(t) * m_radius, t };
}

double Helix::GetLength()const
{
    return 2 * M_PI * std::sqrt(m_radius * m_radius + 1);
}

CurveType Helix::GetType()const
{
    return CurveType::HELIX;
}