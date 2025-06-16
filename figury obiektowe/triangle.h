#ifndef INHERITANCE_TRIANGLE_H
#define INHERITANCE_TRIANGLE_H


#include "Figure.h"

class Triangle : public Figure
{
private:
    float m_a;


public:
    Triangle(string name = "", float radius = 0);
    virtual ~Triangle() {}
    virtual float Area() const;
    virtual float Perimeter() const;
    virtual void Info() const;
};


#endif