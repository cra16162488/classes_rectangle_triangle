#include "Triangle.h"

Triangle::Triangle(float side0, float side1, float side2)
{
    m_sides[0] = side0;
    m_sides[1] = side1;
    m_sides[2] = side2;
}

void  Triangle::setSize(int index, float value)
{
    m_sides[index] = value;
}

float Triangle::getSize(int index)
{
    return m_sides[index];
}

void  Triangle::setDimensions(float side0, float side1, float side2)
{
    setSize(0, side0);
    setSize(1, side1);
    setSize(2, side2);
}

float Triangle::getPerimeter()
{
    return m_sides[0] + m_sides[1] + m_sides[2];
}

float Triangle::getArea()
{
    float p = getPerimeter() / 2;
    return sqrt(p * (p - m_sides[0]) * (p - m_sides[1]) * (p - m_sides[2]));
}
