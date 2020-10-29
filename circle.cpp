#include <iostream>
#include "circle.h"
#include <cmath>

using namespace std;
// konstruktor na gorze. podobnie te metody, ktore inicjalizuja
// jezeli jest napisane, ze = default nie trzeba przepisywac do .cpp

circle::circle(int radius_, Point2D middle_)
{
    radius = radius_;
    middle = Point2D(middle_); // wywolaj konstruktor kopiujacy Point 2D
}

circle::~circle()
{
    //dtor
};

void circle::set_radius( int radius_ )
{
    radius = radius_;
};

int circle::get_radius()
{
    return radius;
};

void circle::set_middle( Point2D middle_)
{
    middle = middle_;
};

Point2D circle::get_middle()
{
    return middle;
};

//bool circle::if_in_the_circle(const Point2D & checked_point) const
bool circle::if_in_the_circle(Point2D & checked_point)
{
    int distance_between_center_and_point = sqrt((middle.get_x() - checked_point.get_x())*(middle.get_x() - checked_point.get_x()) + (middle.get_y() - checked_point.get_y())*(middle.get_y() - checked_point.get_y()));

        if (distance_between_center_and_point < radius)
        {
            return true;
        }

    return false;
};
