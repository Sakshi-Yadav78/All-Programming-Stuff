#include <iostream>
#include <stdio.h>
using namespace std;
class employee
{
    protected:  
        char    name[30];
        int     empId;
        char    gender;
    public:
        void getemployee(void)
        {
            cout << "Enter Name: "; 
            cin.getline(name,30);
            cout << "Enter Emp. Id: ";
            cin  >> empId;
            cout << "Enter Gender: ";
            cin  >> gender;
        }
};
class worker
{
    protected:  
        char    worker_name[30];
        char    assignedWork[30];
    public:
        void getworker(void)
        {
            cout << "Enter Department Name: "; 
            cin.ignore(1);
            cin.getline(worker_name,30);
            cout << "Enter assigned work: ";
            fflush(stdin);
            cin.getline(assignedWork,30);
        }
};
int main()
{
    //create object of class employee
    employee emp;
     
    emp.getemployee();
    emp.getemployee();
     
    return 0;
}