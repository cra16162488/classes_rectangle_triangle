#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class Rectangle {

public:
    Rectangle(float width, float height);

    void setWidth(float width);
    float getWidth();
    void setHeight(float height);
    float getHeight();

    void setDimensions(float width, float height);

    float getPerimeter();
    float getArea();

private:
    float m_width;
    float m_height;
};

#endif // RECTANGLE_HPP
