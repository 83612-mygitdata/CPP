/*
Q3. Write a menu driven program for Student in CPP language. Create a class student with data
members roll no, name and marks. Implement the following functions
void initStudent();
void printStudentOnConsole();
void acceptStudentFromConsole();
*/
#include<iostream>
using namespace std;

class Student
{
    private: 
    int rollno;
    string name;
    int marks;

public:
void initStudent()
{
    rollno = 01;
    name = "Joy";
    marks = 85;
    cout<<"Roll no.: "<<rollno<<endl;
    cout<<"Name: "<< name<<endl;
    cout<<"Marks: "<<marks<<endl;
}

void acceptStudentFromConsole()
{
    cout<<"Please enter the student details (Roll No:Name:Marks): "<<endl;
    cin>> rollno >> name >> marks;
}
void printStudentOnConsole()
{
    cout<<"Details:\n Roll No: "<<rollno<<endl;
    cout<<"\n Name: "<<name<<endl;
    cout<<"\n Marks: "<<marks<<endl;
}

};

int main()
{
    Student s;
    s.initStudent();
    int choice;

    do
    {
        cout<<"Please enter your choice \n 0. Exit\n 1. Accept Student Details\n 2. Display DStudent Details\n "<<endl;
        cin>>choice  ;

        switch(choice)
        {
            case 0:
            cout<<"Thank you ..."<<endl;
            break;
            case 1:
            s.acceptStudentFromConsole();
            break;
            case 2:
            s.printStudentOnConsole();
            break;
            default:
            cout<<"Incorrect Choice!! Please enter correct choice"<<endl;
        }

    }while(choice!=0);
    return 0;
}