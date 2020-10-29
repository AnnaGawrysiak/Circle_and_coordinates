#include "sphere.h"
#include <iostream>
#include <cmath>

using namespace std;

sphere::sphere(int radius_, Point3D center_)
{
    radius = radius_;
    center = Point3D(center_);
}

sphere::~sphere()
{
    //dtor
}

void sphere::set_radius( int radius_ )
{
    radius = radius_;
}

int sphere::get_radius()
{
    return radius;
}

void sphere::set_center( Point3D center_)
{
    center = center_;
}

Point3D sphere::get_center()
{
    return center;
}

bool sphere::if_in_the_sphere(Point3D & checked_point)
{
    int distance_between_center_and_point = sqrt((center.get_a() - checked_point.get_a())*(center.get_a() - checked_point.get_a()) + (center.get_b() - checked_point.get_b())*(center.get_b() - checked_point.get_b()) + (center.get_c() - checked_point.get_c())*(center.get_c() - checked_point.get_c()));

        if (distance_between_center_and_point < radius)
        {
            return true;
        }

    return false;
}
