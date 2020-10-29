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

//int generate();

bool if_already_drawn2D( vector <Point2D> P2, Point2D number);

bool if_already_drawn3D( vector <Point3D> P3, Point3D number); // nazwy mylace. 2 sgeruje, ze jest do 2D

int main()
{
    // losowanie punktow (moze byc osobna klasa generator)

    srand( time( 0 ) );

    // robimy tablice punktow

    vector<Point2D> coordinates;

    int size = 20;

    Point2D my_middle(20, 25);

    coordinates.push_back(my_middle);

    for (int i = 0; i < size; i++)
    {
        int number_x = ((rand()%100)+ 0);

        int number_y = ((rand()%100)+ 0); // stworz lokalne inty i loklane punkty, ktore beda to mialy

        Point2D number2D(number_x, number_y);

            if (if_already_drawn2D(coordinates, number2D) == 0 )
            {
               coordinates.push_back(number2D);
            }
    }

    // losowanie do osobnej fukcji. Moze byc w mainie. Moze byc w klasie generator.

    // tutaj wchdzi klasa circle
    int radius = 20;

    circle my_circle(radius, my_middle);

    vector <Point2D> myvector;

    for (int i = 0; i < coordinates.size(); i++)
    {
        if (my_circle.if_in_the_circle(coordinates[i])) //nie trzeba robic == true
            {
               myvector.push_back(coordinates[i]);
            }
    }

    cout << "Coordinates of 2D points inside of the circle: "<< endl;

    for (int i = 0; i < myvector.size(); i++)
   {
       cout << "x coordinates: " << myvector[i].get_x() << "  y coordinates: " << myvector[i].get_y() << endl;
   }

   // stworz osobna klase (SFERA)

    vector<Point3D> coordinates3D;

    Point3D the_middle3D(21, 25, 28);

     for (int i = 0; i < 20; i++)
    {

        Point3D number3D(0,0, 0);

        number3D.set_a((rand()%100)+ 0);

        number3D.set_b((rand()%100)+ 0);

        number3D.set_c((rand()%100)+ 0);

            if (if_already_drawn3D(coordinates3D, number3D) == 0)
            {
               coordinates3D[i].set_a(number3D.get_a());

               coordinates3D[i].set_b(number3D.get_b());

               coordinates3D[i].set_c(number3D.get_c());
            }

    };

sphere my_sphere(radius, the_middle3D);

   vector <Point3D> myvector3D;

    for (int i = 0; i < coordinates3D.size(); i++)
    {
        if (my_sphere.if_in_the_sphere(coordinates3D[i])) //nie trzeba robic == true
            {
               myvector3D.push_back(coordinates3D[i]);
            }
    }

    cout << "Coordinates of 3D points inside of the sphere: "<< endl;

    for (int i = 0; i < myvector3D.size(); i++)
   {
       cout << "x coordinates: " << myvector3D[i].get_a() << "  y coordinates: " << myvector3D[i].get_b() <<"  z coordinates: " << myvector3D[i].get_c() << endl;
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
