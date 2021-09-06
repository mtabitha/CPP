#include "Point.hpp"

Fixed sign(Point p, Point p1, Point p2)
{
    return ((p.getX() - p2.getX()) * (p1.getY() - p2.getY()) -
    		(p.getY() - p2.getY()) * (p1.getX() - p2.getX())).toFloat();
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed   n1, n2, n3;
    bool    has_neg, has_pos;

    n1 = sign(point, a, b);
    n2 = sign(point, b, c);
    n3 = sign(point, c, a);

    has_neg = (n1 <= 0) || (n2 <= 0) || (n3 <= 0);
    has_pos = (n1 >= 0) || (n2 >= 0) || (n3 >= 0);

    return !(has_neg && has_pos);
}