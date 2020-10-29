#pragma once
#include <iostream>
#include<vector>

using namespace std;

class Point3D
{
private:

    int a;
    int b;
    int c;

public:

    Point3D();

    Point3D(int a_, int b_, int c_);

    Point3D(const Point3D & P1);

    Point3D & operator=(const Point3D & P3);

    void set_a( int a_ );

    int get_a();

    void set_b( int b_);

    int get_b();

    void set_c( int c_);

    int get_c();

};
