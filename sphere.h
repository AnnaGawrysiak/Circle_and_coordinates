# pragma once
#include "Point3D.h"

class sphere
{
    public:
        sphere(int radius, Point3D center);
        sphere() = default;
        virtual ~sphere();
        void set_radius( int radius_ );
        int get_radius();
        void set_center( Point3D center_);
        Point3D get_center();

        bool if_in_the_sphere(Point3D & checked_point); // const typ referecncja - kolejnosc

    private:
        Point3D center;
        int radius;
};
