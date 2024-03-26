#include<iostream>
using namespace std;

class date
{
    private:
    int day;
    int month;
    int year;

    public:
    
    void acceptDate()
    {
        cout<<"Date:"<<endl;
        cin>>day;
        cout<<"Month:"<<endl;
        cin>>month;
        cout<<"Year:"<<endl;
        cin>>year;
    }

    void displayDate()
    {
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }
};

class Person
{
    private:
    string name;
    string address;
    date dob;

    public:


    void acceptData()
    {
        cout<<"Enter the name of a person:"<<endl;
        cin>>name;
        cout<<"Enter the address of a person:"<<endl;
        cin>>address;
        cout<<"Enter the Date of Birth:"<<endl;
        dob.acceptDate();
    }

    void displayData()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Address : "<<address<<endl;
        cout<<"Date of Birth : ";
        dob.displayDate();
        cout<<endl;
    }

};
class Employee:public Person
{
    private:
    int empid;
    double sal;
    string dept;
    date doj;

    public:

    void acceptData()
    {
        Person::acceptData();
        cout<<"Enter the Employee id:"<<endl;
        cin>>empid;
        cout<<"Enter the salary:"<<endl;
        cin>>sal;
        cout<<"Enter the dept:"<<endl;
        cin>>dept;
        cout<<"Enter the date of join:"<<endl;
        doj.acceptDate();
        
    }

    void displayData()
    {
        Person::displayData();
        cout<<"empid : "<<empid<<endl;
        cout<<"sal : "<<sal<<endl;
        cout<<"dept : "<<dept<<endl;
        cout<<"Date of joining is : ";
        doj.displayDate();
    }

};

int main()
{
    
    // Person p;
    // p.acceptData();
    // p.displayData();

    Employee e;
    e.acceptData();
    e.displayData();

    // Person *ptr=new Employee();
    // ptr->acceptData();
    // ptr->displayData();

    // delete ptr;
    // ptr=NULL;
    return 0;
}
