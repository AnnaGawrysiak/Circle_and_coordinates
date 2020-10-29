#pragma once
#include <vector>

using namespace std;

class Point2D
{
private:

    int x;
    int y;

public:

    Point2D();

    Point2D(int x_, int y_);

    Point2D(const Point2D & P1);

    Point2D & operator=(const Point2D & P2);

    void set_x( int x_ );

    int get_x();

    void set_y( int y_);

    int get_y();

    // operator przypisania dopisz
    // pola sa publiczbe. zmien na private

};
