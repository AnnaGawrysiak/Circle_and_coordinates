/*Na p³aszczyŸnie dwuwymiarowej znajduje siê 20 punktów. Dla uproszczenia przyjmujemy, ¿e p³aszczyzna ma wymiary 100 x 100 jednostek.
Wspó³rzêdne punktów (x oraz y) mog¹ byæ wybrane odgórnie, lub w wersji rozszerzonej, losowane. Napisz funkcjê, która przyjmuje dwa
parametry: punkt w tej przestrzeni P oraz d³ugoœæ promienia R. Funkcja powinna zwracaæ wspó³rzêdne punktów, które znajduj¹ siê
wewn¹trz okrêgu o œrodku w P oraz promieniu R i umo¿liwiaæ wypisanie ich na ekran. Przydatny bêdzie wzór na obliczanie d³ugoœci
odcinka */

#include <iostream>
#include <ctime>
#include <vector>
#include <utility>
#include <cmath>

using namespace std;

class Point
{
public:
    int x;
    int y;

public:
    Point(int x_, int y_)
    {
        x = x_;
        y = y_;
    };


    void set_x( int x_ )
    {
        x = x_;
    }


    int get_x()
    {
        return x;
    }

    void set_y( int y_ )
    {
        y = y_;
    }


   int get_y()
    {
        return y;
    }

    Point()
    {
        x = 0;
        y = 0;
    }

     Point (const Point & P1)
        {
            x = P1.x;
            y = P1.y;
        }

};

 bool if_already_drawn( Point P2[20], Point number, int how_many )
        {
            int i = 0;
            do
            {
                if( P2[ i ]. x == number.x && P2[ i ]. y == number.y )
                     return true;

                i++;
            } while( i < how_many );

            return false;
        }

void in_the_circle (int r, Point center, Point P2[20])
{

vector <pair<int,int>> points_inside;

//points_inside.push_back(make_pair(1, 2));

int distance_between_center_and_point = 0;

for (int i = 0; i < 20; i++)
    {
        distance_between_center_and_point = sqrt((center.x - P2[i].x)*(center.x - P2[i].x) + (center.y - P2[i].y)*(center.y - P2[i].y));
        //cout << distance_between_P_and_point << endl;

        if (distance_between_center_and_point < r)
        {
            points_inside.push_back(make_pair(P2[i].x, P2[i].y));
        }
    }

for (int i = 0; i < points_inside.size(); i++)
    {
        if (points_inside[i].first != center.x || points_inside[i].second != center.y)
        cout << points_inside[i].first << " "
             << points_inside[i].second << endl;
    }

}

int main()
{
    srand( time( 0 ) );

    const int size = 20;

    Point coordinates[size];

    int temp = 0;

    Point number(0,0);

    int how_many = 0;

    for (int i = 0; i < 20; i++)
    {
        temp = (rand()%100)+ 0;
        number.set_x(temp);

        temp = (rand()%100)+ 0;
        number.set_y(temp);

        ++how_many;

            if (if_already_drawn (coordinates, number, how_many) == 0)
            {
               coordinates[i].set_x(number.x);

               coordinates[i].set_y(number.y);

            }

        cout << endl;
    }

    int radius = 20;
    Point the_middle(21, 25);

    in_the_circle (radius, the_middle, coordinates);

    return 0;
}

