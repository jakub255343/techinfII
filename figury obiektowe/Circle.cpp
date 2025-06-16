//
// Created by student on 09.06.2025.
//
#include "Circle.h"
#include <math.h>

Circle::Circle(string name, float a) : Figure(name)
{
    m_radius = a;
}

float Circle::Area() const
{
    return M_PI * m_radius * m_radius;
}

float Circle::Perimeter() const
{
    return 2 * M_PI * m_radius;
}

void Circle::Info() const
{
    cout << "Circle: " << Name() << endl;
    cout << "Radius: " << m_radius << endl;
    cout << "Area: " << M_PI * m_radius * m_radius << endl;
    cout << "Perimeter: " << 2 * M_PI * m_radius << endl;
}