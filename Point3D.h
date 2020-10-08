#pragma once
#include <iostream>
#include<vector>

using namespace std;

class Point3D
{
public:

    int a;
    int b;
    int c;

public:

    Point3D();

    Point3D(int a_, int b_, int c_);

    Point3D(const Point3D & P1);

    void set_a( int a_ );

    int get_a();

    void set_b( int b_);

    int get_b();

    void set_c( int c_);

    int get_c();

    vector<Point3D>in_the_circle(int r, Point3D center, Point3D P2[20]);

};
