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

vector<Point2D> Point2D::in_the_circle(int r, Point2D center, Point2D P2[20])
{

    std::vector<Point2D>points_inside;

    int distance_between_center_and_point = 0;

    for (int i = 0; i < 20; i++)
    {
        distance_between_center_and_point = sqrt((center.x - P2[i].x)*(center.x - P2[i].x) + (center.y - P2[i].y)*(center.y - P2[i].y));

        Point2D temp(P2[i].x, P2[i].y);

        if (distance_between_center_and_point < r)
        {
            points_inside.push_back(temp);
        }
    }

    return points_inside;
}



