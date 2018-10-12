#include "Rectangle.h"

Rectangle::Rectangle(float width, float height)
: m_width(width)
, m_height(height)
{
}

void Rectangle::setWidth(float width)
{
    m_width = width;
}

void Rectangle::setHeight(float height)
{
   m_height = height;
}

float Rectangle::getWidth()
{
    return m_height;
}

float Rectangle::getHeight()
{
    return m_height;
}

void Rectangle::setDimensions(float width, float height)
{
    setWidth(width);
    setHeight(height);
}

float Rectangle::getPerimeter()
{
    return 2 * m_height + 2 * m_width;
}

float Rectangle::getArea()
{
    return m_height * m_width;
}
