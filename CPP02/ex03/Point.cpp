#include "Point.hpp"

Point::Point() : x(0), y(0)
{
}

Point::Point(const Point& copy) : x(copy.getX()), y(copy.getY())
{

}

Point::Point(const float x, const float y) : x(x), y(y)
{
}


const Fixed&   Point::getX(void) const
{
    return (x);
}

const Fixed&   Point::getY(void) const 
{
    return (y);
}

Point::~Point()
{

}
