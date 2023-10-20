#include "Curve.h"

class Ellipse : public Curve
{
public:

    Ellipse() :Ellipse(0, 0)
    {

    }

    Ellipse(double x_radius, double y_radius) :m_x_radius(x_radius), m_y_radius(y_radius)
    {

    }

    virtual Vec GetTangentAt(double t)const override
    {
        return { -std::sin(t) * m_x_radius, std::cos(t) * m_y_radius, 1 };
    }

    virtual Point GetPointAt(double t)const override
    {
        return { std::cos(t) * m_x_radius, std::sin(t) * m_y_radius, 0 };
    }

    virtual double GetLength()const override
    {
        return 2 * M_PI * std::sqrt((m_x_radius * m_x_radius + m_y_radius * m_y_radius) * 0.5);
    }

    virtual CurveType GetType()const override
    {
        return CurveType::ELLIPSE;
    }

protected:
    double m_x_radius = 0;
    double m_y_radius = 0;
};