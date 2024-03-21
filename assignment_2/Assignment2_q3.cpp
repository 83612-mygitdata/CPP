/*
Write a class Address with data members (string building, string street, string city ,int pin)
Implement constructors, getters, setters, accept(), and display() methods.
Test the class functunalities by creating the object of class and calling all the functions.
*/

#include<iostream>
using namespace std;

class Address
{
    private:
    string building;
    string street;
    string city;
    int pin;

    public:

    Address()
    {
        //cout<<"ADDRESS BY PARAMETERLESS CONSTRUCTOR"<<endl;
        building = "Sunbeam";
        street = "Shanivaar Peth";
        city = "Karad";
        pin = 415110;
    }

    Address(string building,string street,string city,int pin)
    {
        this->building=building;
        this->street=street;
        this->city=city;
        this->pin=pin;
        //cout<<"ADDRESS BY PARAMETERIZED CONSTRUCTOR"<<endl;
    }

    void accept()
    {
        //getchar();
        cout<<"Enter the address:"<<endl;
        cout<<"Building name : ";
        cin>>building;
        //getline(cin,building);        
        cout<<"Street name : ";
        cin>>street;
        cout<<"City name : ";
        cin>>city;
        cout<<"Pin code : ";
        cin>>pin;

    }
    void setbuild(string b)
    {
        building=b;
    }
    void setstreet(string st)
    {
        street=st;
    }
    void setcity(string c)
    {
        city=c;
    }
    void setpin(int p)
    {
        pin=p;
    }
    string getbuild()
    {
        return building;
    }
    string getstreet()
    {
        return street;
    }
    string getcity()
    {
        return city;
    }
    int getpin()
    {
        return pin;
    }

    void display()
    {
        cout<<"The address is : "<<building<<","<<street<<","<<city<<","<<pin<<endl;
    }

};
int main()
{
    Address a0;  //parameterless
    a0.display();
    Address a1;  //accept-display
    a1.accept();
    a1.display();
    Address a2("Gokuldham","Shivajinagar","Mumbai",416115);  //parametrized
    a2.display();
    Address a3;  //set-get
    a3.setbuild("Shriram");
    a3.setstreet("FC road");
    a3.setcity("Pune");
    a3.setpin(400006);
    //cout<<"ADDRESS BY SET-GET IS:"<<endl;
    cout<<"Building name:"<<a3.getbuild()<<endl;
    cout<<"Street name:"<<a3.getstreet()<<endl;
    cout<<"City name:"<<a3.getcity()<<endl;
    cout<<"Pin code:"<<a3.getpin()<<endl;

    return 0;
}