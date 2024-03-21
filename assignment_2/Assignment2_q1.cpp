/*
Write a menu driven program to calculate volume of the box(length * width * height).
Provide parameterless, parameterized(with 3 parameters) and single paramaterized constructor.
Create the local objects in respective case and call the function to caluclate area.
Menu options ->
1. Calculate Volume with default values
2. Calculate Volume with length,breadth and height with same value
3. Calculate Volume with different length,breadth and height values.
*/


#include<iostream>
using namespace std;
class volume
{
    private:
    int l;
    int w;
    int h;

    public:

    volume()  //parameterless constructor
    {
        l=10;
        w=5;
        h=2;
        cout<<"Volume for parameterless constructor:"<<endl;
        calVol();
    }

    volume(int v)  //single parameterized
    {
        l=v;
        w=v;
        h=v;
        cout<<"Volume for single-parameterized:"<<endl;
        calVol();

    }

    volume(int l1,int w1,int h1)  //parameterized constructor
    {
        l=l1;
        w=w1;
        h=h1;
        cout<<"Volume for multi-parameterized:"<<endl;
        calVol();
    }

    void calVol()
    {
        cout<<"Volume is "<<l * w * h<<endl;
    }
};

int main()
{
    volume v1,v2(5),v3(2,4,6);
    int choice;

    do
    {
        cout<<"0 : Exit"<<endl;
        cout<<"1 : Volume with default values"<<endl;
        cout<<"2 : Volume with same values"<<endl;
        cout<<"3 : Volume with different values"<<endl;
        cout<<"Enter your choice.."<<endl;
        cin>>choice;

        switch(choice)
        {
            case 0:
            cout<<"Thank you for using our app!"<<endl;
            break;
            case 1:
            v1.calVol();
            break;
            case 2:
            v2.calVol();
            break;
            case 3:
            v3.calVol();
            break;
            default:
            cout<<"Wrong choice."<<endl;
            break;

        }

    }while(choice != 0);
    return 0;
}