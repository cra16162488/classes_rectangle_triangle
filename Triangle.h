#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include <math.h>

class Triangle {

public:
    Triangle(float side0, float side1, float side2);

    void  setSize(int index, float value);
    float getSize(int index);

    void setDimensions(float side0, float side1, float side2);

    float getPerimeter();
    float getArea();

private:
    float m_sides[3];
};

#endif // TRIANGLE_HPP
