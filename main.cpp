#include <iostream>
#include <ctime>
#include <vector>
#include <utility>
#include <cmath>
#include "Point2D.h"
#include "Point3D.h"

using namespace std;

bool if_already_drawn1( Point2D P2[20], Point2D number);

bool if_already_drawn2( Point3D P2[20], Point3D number);

int main()
{
    srand( time( 0 ) );

    const int size = 20;

    int radius = 20;

    Point2D coordinates[size];

    Point2D number(0,0);

    for (int i = 0; i < 20; i++)
    {
        number.set_x((rand()%100)+ 0);

        number.set_y((rand()%100)+ 0);

            if ((if_already_drawn1(coordinates, number) == 0))
            {
               coordinates[i].set_x(number.x);

               coordinates[i].set_y(number.y);

            }
    }

    Point2D the_middle(21, 25);

    vector <Point2D> myvector = the_middle.in_the_circle (radius, the_middle, coordinates);

    cout << "Coordinates of 2D points inside of the circle: "<< endl;

    for (int i = 0; i < myvector.size(); i++)
   {
       cout << "x coordinates: " << myvector[i].x << "  y coordinates: " << myvector[i].y << endl;
   }

    Point3D coordinates3D[size];

    Point3D the_middle3D(21, 25, 28);

    Point3D number3D(0,0, 0);

     for (int i = 0; i < 20; i++)
    {
        number3D.set_a((rand()%100)+ 0);

        number3D.set_b((rand()%100)+ 0);

        number3D.set_c((rand()%100)+ 0);

            if (if_already_drawn2(coordinates3D, number3D) == 0)
            {
               coordinates3D[i].set_a(number3D.a);

               coordinates3D[i].set_b(number3D.b);

               coordinates3D[i].set_c(number3D.c);
            }

    };


    vector <Point3D> myvector3D = the_middle3D.in_the_circle(radius, the_middle3D, coordinates3D);

    cout << endl;

    cout << "Coordinates of 3D points inside of the circle: "<< endl;

    for (int i = 0; i < myvector3D.size(); i++)
   {
       cout << "x coordinates: " << myvector3D[i].a << "  y coordinates: " << myvector3D[i].b <<"  z coordinates: " << myvector3D[i].c << endl;
   }

    return 0;
}

bool if_already_drawn1( Point2D P2[20], Point2D number)
    {
        int i = 0;
        do
        {
            if( P2[ i ]. x == number.x && P2[ i ]. y == number.y )
            return true;

            i++;

        } while( i < 20 );

        return false;
    }

bool if_already_drawn2( Point3D P2[20], Point3D number)
    {
        int i = 0;
        do
        {
            if( P2[ i ]. a == number.a && P2[ i ]. b == number.b && P2[ i ]. c == number.c)
            return true;

            i++;

        } while( i < 20 );

        return false;
    }

