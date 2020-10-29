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

Point3D & Point3D::operator=(const Point3D & P3)
    {
        if (&P3 != this)
        {
            a = P3.a;
            b = P3.b;
            c = P3.c;
        }

    return *this;
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
