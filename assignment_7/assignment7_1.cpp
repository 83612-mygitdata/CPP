#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    double salary;

public:

    
    Employee()
    {
        cout << "Inside Employee()" << endl;
    }
    Employee(int id, double salary)
    {
        cout << "Inside Employee(int,double)" << endl;
    }
    virtual void accept()
    {
        cout << "Enter the empid - ";
        cin >> id;
        cout << "Enter the salary - ";
        cin >> salary;
    }
    virtual void display()
    {
        cout << "Id - " << id << endl;
        cout << "Salary - " << salary << endl;
    }
    virtual ~Employee()
    {
        cout << "~Employee()" << endl;
    }
};

class Manager : virtual public Employee  //this virtual will call employee function only one time
{
private:
    double bonus;

protected:
    void acceptManager()
    {
        cout << "Enter the bonus - ";
        cin >> bonus;
    }
    void displayManager()
    {
        cout << "Bonus - " << bonus << endl;
    }

public:
    Manager()
    {
        cout << "Inside Manager()" << endl;
    }
    Manager(int id, double salary, double bonus)
    {
        cout << "Inside Manager(int,double,double)" << endl;
    }
    void accept()
    {
        Employee::accept();
        acceptManager();
    }

    void display()
    {
        Employee::display();
        displayManager();
    }
    ~Manager()
    {
        cout << "~Manager()" << endl;
    }
};

class Salesman : virtual public Employee
{
private:
    double commission;

protected:
    void acceptSalesman()
    {
        cout << "Enter the Commission - ";
        cin >> commission;
    }
    void displaySalesman()
    {
        cout << "Commission - " << commission << endl;
    }

public:
    Salesman()
    {
        cout << "Inside Salesman()" << endl;
    }
    Salesman(int id, double salary, double commission)
    {
        cout << "Inside Salesman(int,double,double)" << endl;
    }
    void accept()
    {
        Employee::accept();
        acceptSalesman();
    }
    void display()
    {
        Employee::display();
        displaySalesman();
    }
    ~Salesman()
    {
        cout << "~Salesman()" << endl;
    }
};
class SalesManager : public Manager, public Salesman
{
public:
    SalesManager()
    {
        cout << "Inside Salesmanager()" << endl;
    }
    SalesManager(int id, double salary, double bonus, double commission)
    {
        cout << "Inside SalesManager(int,double,double,double)" << endl;
    }
    ~SalesManager()
    {
        cout << "~Salesmanager()" << endl;
    }
    void accept()
    {
        Employee::accept();
        acceptManager();
        acceptSalesman();
    }
    void display()
    {
        Employee::display();
        displayManager();
        displaySalesman();
    }
};

int main()
{
    int choice;
    Employee *arr[5];
    int index=0;
    int ch;
    int count=0;
    int counts=0;
    int countsm=0;

    do
    {
        cout<<"0. Exit"<<endl;
        cout<<"1. Accept Employee"<<endl;
        cout<<"2. Display the count of all employees with respect to designation"<<endl;
        cout<<"3. Display all Managers"<<endl;
        cout<<"4. Display all Salesman"<<endl;
        cout<<"5. Display all Salesmanager"<<endl;
        cout<<"Enter your choice..";
        cin>>choice;

        switch(choice)
        {
        case 0:
        cout<<"Thank you!"<<endl;
        break;

        case 1:
        do
        {
            cout<<"0. Back:"<<endl;
            cout<<"1. Accept Manager:"<<endl;
            cout<<"2. Accept Salesman:"<<endl;
            cout<<"3. Accept Salesmanager:"<<endl;
            cout<<"Enter your choice:";
            cin>>ch;

            switch (ch)
            {
                case 0:
                {
                cout<<"Wrong entry!"<<endl;
                }
                break;

                case 1:
                {
                if(index<5)
                {
                    arr[index]=new Manager;
                    arr[index]->accept();
                    index++;
                }
                }
                break;

                case 2:
                {
                if(index<5)
                {
                    arr[index]=new Salesman;
                    arr[index]->accept();
                    index++;
                }
                }
                break;

                case 3:
                {
                if(index<5)
                {
                    arr[index]=new SalesManager;
                    arr[index]->accept();
                    index++;
                }
                } 
                break;
            }
        }while(ch!=0);
        break;

        case 2:
        {
            cout<<"Display the count of employees with respect to designation:"<<endl;
            cout<<"1. For Manager"<<endl;
            cout<<"1. For Salesman"<<endl;
            cout<<"1. For Salesmanager"<<endl;

            for(int i=0;i<index;i++)
            {
                if(typeid(*arr[i])==typeid(Manager))
                {
                    count++;
                }
                else if(typeid(*arr[i])==typeid(Salesman))
                {
                    counts++;
                }
                else
                {
                    countsm++;
                }

            }
            cout<<"Manager:"<<count<<endl;
            cout<<"Salesman:"<<counts<<endl;
            cout<<"SalesManager:"<<countsm<<endl;
        }
        break;

        case 3:
        {
        for(int i=0;i<index;i++)
        {
            if(typeid(*arr[i])==typeid(Manager))
            {
                arr[i]->display();
            }
        }
        }
        break;

        case 4:
        {
        for(int i=0;i<index;i++)
        {
            if(typeid(*arr[i])==typeid(Salesman))
            {
                arr[i]->display();
            }
        }
        }
        break;

        case 5:
        {
        for(int i=0;i<index;i++)
        
        {
            if(typeid(*arr[i])==typeid(SalesManager))
            {
                arr[i]->display();
            }
        }
        }
        break;
        
        }
    }while(choice!=0);

    return 0;
}
