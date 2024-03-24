/*
Implement following classes. Test all functionalities in main().
Create a class Date with data memebrs day,month and year.
Cretae a class Person with data members name,address and birthdate. The birthdate shoud be of
type date.
Cretae a class Employee with data members id, sal, dept and joining date. The joining date should
be of type date.
*/

#include<iostream>
using namespace std;

class date
{
    private:
    int day;
    int month;
    int year;

    public:
    date()
    {
        day=01;
        month=01;
        year=2001;
    }

    date(int day,int month,int year)
    {
        this->day=day;
        this->month=month;
        this->year=year;
    }
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

    Person()
    {
        name="";
        address="";
    }
    Person(string name,string address,int day,int month,int year):dob(day,month,year)
    {
        this->name=name;
        this->address=address;
    }

    void acceptPerson()
    {
        cout<<"Enter the name of a person:"<<endl;
        cin>>name;
        cout<<"Enter the address of a person:"<<endl;
        cin>>address;
        cout<<"Enter the Date of Birth:"<<endl;
        dob.acceptDate();
    }

    void displayPerson()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Address : "<<address<<endl;
        cout<<"Date of Birth : ";
        dob.displayDate();
        cout<<endl;
    }

};
class Employee:Person
{
    private:
    int id;
    int sal;
    int dept;
    date doj;

    public:
    Employee()
    {
        id=01;
        sal=20000;
        dept=10;
    }
    Employee(int id,int sal,int dept,int day,int month,int year):doj(day,month,year)
    {
        this->id=id;
        this->sal=sal;
        this->dept=dept;
    }

    void acceptEmployee()
    {
        cout<<"Enter the Employee id:"<<endl;
        cin>>id;
        cout<<"Enter the salary:"<<endl;
        cin>>sal;
        cout<<"Enter the dept:"<<endl;
        cin>>dept;
        cout<<"Enter the date of join:"<<endl;
        doj.acceptDate();
    }

    void displayEmployee()
    {
        cout<<"id : "<<id<<endl;
        cout<<"sal : "<<sal<<endl;
        cout<<"dept : "<<dept<<endl;
        cout<<"Date of joining is : ";
        doj.displayDate();
    }

    void displayDerivedEmp()
    {
        Person::acceptPerson();
        Person::displayPerson();
    }
};

int main()
{
    // Person p("Disha","Gokuldham",10,8,2001);
    // p.displayPerson();

    // Person p1;
    // p1.acceptPerson();
    // p1.displayPerson();

    // Employee e(1,20000,100,20,12,2012);
    // e.displayEmployee();

    // Employee e2;
    // e2.acceptEmployee();
    // e2.displayEmployee();

    // Employee e1;
    // e1.displayDerivedEmp();

    Employee emp;
    emp.displayDerivedEmp();
    emp.acceptEmployee();
    emp.displayEmployee();

    return 0;
}
