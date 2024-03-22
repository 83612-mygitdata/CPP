/*
Q1. Write a class to find volume of a Cylinder by using following members. (volume of
Cylinder=3.14 * radius * radius *height) ( use static wherever needed. hint-PI)
Class having following member functions:
Cylinder()
Cylinder(double radius, double height)
getRadius()
setRadius()
getHeight()
setHeight()
getVolume()
printVolume()
Initialize members using constructor member initializer list.
*/
#include<iostream>
using namespace std;

class Cylinder
{
    private:
    double r;
    double h;
    double volume;
    static const double PI;

    public:
    Cylinder()
    {
        r=10;
        h=5;
    }

    Cylinder(double height):r(10)
    {
        //this->r=radius;
         this->h=height;
    }

    void setRadius(double radius)
    {
        r=radius;
    }
    void setHeight(double height)
    {
        h=height;
    }
    double getRadius()
    {
        return r;
    }
    double getHeight()
    {
        return h;
    }

    void printVolume()
    {
        cout<<"Volume of Cylinder is:"<<(volume=PI*r*r*h)<<endl;
    }

    double getVolume()
    {
        return (PI*r*r*h);
    }

};
const double Cylinder :: PI = 3.14;

int main()
{
        Cylinder c;
        c.printVolume();

        Cylinder c1(5.5);
        c1.printVolume();

        Cylinder c2;
        c2.setHeight(4);
        cout<<"The height is: "<<c2.getHeight()<<endl;
        c2.setRadius(10);
        cout<<"The radius is: "<<c2.getRadius()<<endl;
        
        cout<<"The volume is: "<<c2.getVolume()<<endl;

        return 0;
}
