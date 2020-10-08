#pragma once

using namespace std;

class Point2D
{
public:

    int x;
    int y;

public:

    Point2D();

    Point2D(int x_, int y_);

    Point2D(const Point2D & P1);

    void set_x( int x_ );

    int get_x();

    void set_y( int y_);

    int get_y();

    vector <Point2D> in_the_circle (int r, Point2D center, Point2D P2[20]);

};
