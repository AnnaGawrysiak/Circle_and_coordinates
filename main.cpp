#include <iostream>
#include <ctime>
#include <vector>
#include <utility>
#include <cmath>
#include "Point2D.h"
#include "Point3D.h"
#include "circle.h"
#include "sphere.h"

using namespace std;

void draw2D(vector<Point2D> &coordinates2D);

void draw3D(vector<Point3D> &coordinates3D);

bool if_already_drawn2D( vector <Point2D> P2, Point2D number);

bool if_already_drawn3D( vector <Point3D> P3, Point3D number);

int main()
{
    srand( time( 0 ) );

    vector<Point2D> coordinates;

    int size = 20;

    Point2D my_middle(20, 25);

    coordinates.push_back(my_middle);

    for (int i = 0; i < size; i++)
        {
            draw2D(coordinates);
        }

    int radius = 20;

    circle my_circle(radius, my_middle);

    vector <Point2D> myvector;

     for (auto it= coordinates.begin(); it!= coordinates.end(); ++it)
           {
               if (my_circle.if_in_the_circle((*it)))
                {
                   myvector.push_back((*it));
                }
           };

    cout << "Coordinates of 2D points inside of the circle: "<< endl;

        for (auto it= myvector.begin(); it!= myvector.end(); ++it)
           {
               cout << "x coordinates: " << (*it).get_x() << "  y coordinates: " << (*it).get_y() << endl;
           }

    vector<Point3D> coordinates3D;

    Point3D the_middle3D(21, 25, 28);

    coordinates3D.push_back(the_middle3D);

    for (int i = 0; i < size; i++)
        {
            draw3D(coordinates3D);
        }

    sphere my_sphere(radius, the_middle3D);

   vector <Point3D> myvector3D;

    for (auto it= coordinates3D.begin(); it!= coordinates3D.end(); ++it)
    {
        if (my_sphere.if_in_the_sphere((*it)))
            {
               myvector3D.push_back((*it));
            }
    }

    cout << endl;
    cout << "Coordinates of 3D points inside of the sphere: " << endl;

    for (auto it= myvector3D.begin(); it!= myvector3D.end(); ++it)
        {
            cout << "x coordinates: " << (*it).get_a() << "  y coordinates: " << (*it).get_b() <<"  z coordinates: " << (*it).get_c() << endl;
        }

    return 0;
}

bool if_already_drawn2D( vector <Point2D> P2, Point2D number)
    {
        int i = 0;
        do
        {
            if( P2[ i ].get_x() == number.get_x() && P2[ i ].get_y() == number.get_y())
            return true;

            i++;

        } while( i < 20 );

        return false;
    }

bool if_already_drawn3D( vector <Point3D> P3, Point3D number)
    {
        int i = 0;
        do
        {
            if( P3[ i ].get_a() == number.get_a() && P3[ i ].get_b() == number.get_b() && P3[ i ].get_c() == number.get_c())
            return true;

            i++;

        } while( i < 20 );

        return false;
    }

void draw2D(vector<Point2D> &coordinates2D)
{
    int number_x = ((rand()%100)+ 0);

    int number_y = ((rand()%100)+ 0);

        Point2D number2D(number_x, number_y);


            if (if_already_drawn2D(coordinates2D, number2D) == 0 )
            {
               coordinates2D.push_back(number2D);
            }
}

void draw3D(vector<Point3D> &coordinates3D)
{
    int number_x = ((rand()%100)+ 0);

    int number_y = ((rand()%100)+ 0);

    int number_z = ((rand()%100)+ 0);

        Point3D number3D(number_x, number_y, number_z);

            if (if_already_drawn3D(coordinates3D, number3D) == 0 )
            {
               coordinates3D.push_back(number3D);
            }
}
