#include<iostream>
using namespace std;

class Wall
{
    double length;
    double height;

    public:

    Wall(double len, double hgt)
    {
        length = len;
        height = hgt;
    }
    Wall(Wall & obj)
{
    length = obj.length;
    height = obj.height;
}
double calculateArea()
{
    return length*height;
}
};
int main()
{
    Wall wall1(10.5, 8.6);
    Wall wall2 = wall1;

    cout<<"Area of Wall 1: "<<wall1.calculateArea()<<endl;
    cout<<"Area of Wall 2: "<<wall2.calculateArea();
}
//output
/*Area of Wall 1: 90.3
Area of Wall 2: 90.3*/
