#include "Point3D.h"
#include <iostream>
#include<vector>
#include<cmath>


Point3D::Point3D()
{
    a = 0;
    b = 0;
    c = 0;
}

Point3D::Point3D(int a_, int b_, int c_)
{
    a = a_;
    b = b_;
    c = c_;
};


Point3D::Point3D(const Point3D & P1)
{
    a = P1.a;
    b = P1.b;
    c = P1.c;
}

void Point3D::set_a( int a_ )
{
    a = a_;
}

int Point3D::get_a()
{
    return a;
}

void Point3D::set_b( int b_ )
{
    b = b_;
}

int Point3D::get_b()
{
    return b;
}

void Point3D::set_c( int c_ )
{
    c = c_;
}

int Point3D::get_c()
{
    return c;
}


std::vector<Point3D> Point3D::in_the_circle(int r, Point3D center, Point3D P2[20])
{

    std::vector<Point3D>points_inside;

    int distance_between_center_and_point = 0;

    for (int i = 0; i < 20; i++)
    {
        distance_between_center_and_point = sqrt((center.a - P2[i].a)*(center.a - P2[i].a) + (center.b - P2[i].b)*(center.b - P2[i].b) + (center.c - P2[i].c)*(center.c - P2[i].c));

        Point3D temp(P2[i].a, P2[i].b, P2[i].c);

        if (distance_between_center_and_point < r)
        {
            points_inside.push_back(temp);
        }
    }

    return points_inside;
}
