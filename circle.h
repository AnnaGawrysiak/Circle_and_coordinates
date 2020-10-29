# pragma once
#include "Point2D.h"

class circle
{
    public:
        circle(int radius, Point2D middle);
        circle() = default;
        virtual ~circle();
        void set_radius( int radius_ );
        int get_radius();
        void set_middle( Point2D middle_);
        Point2D get_middle();
        bool if_in_the_circle(Point2D & checked_point);
        //bool if_in_the_circle(const Point2D & checked_point); // const typ referecncja - kolejnosc

    private:
        Point2D middle;
        int radius;
};
