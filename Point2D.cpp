#include <iostream>
#include<vector>
#include<cmath>
#include "Point2D.h"

Point2D::Point2D()
{
    x = 0;
    y = 0;
}

Point2D::Point2D(int x_, int y_)
{
    x = x_;
    y = y_;
};


Point2D::Point2D(const Point2D & P1)
{
    x = P1.x;
    y = P1.y;
}

Point2D & Point2D::operator=(const Point2D & P2)
    {
        if (&P2 != this)
        {
            x = P2.x;
            y = P2.y;
        }

    return *this;
    }

void Point2D::set_x( int x_ )
{
    x = x_;
}

int Point2D::get_x()
{
    return x;
}

void Point2D::set_y( int y_ )
{
    y = y_;
}

int Point2D::get_y()
{
    return y;
}




