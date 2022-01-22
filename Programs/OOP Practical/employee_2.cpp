#include<iostream>
#include<fstream>
#include<conio.h>
#include<stdio.h>
using namespace std;
//class Employee
class Employee
{
public:
char name[30];
int salary;
};

//class Manager inherited from class Employee
class Manager:public Employee
{
public:
char dept[30];

//to getdata from the user
void getData()
{
cout<<"\nEnter the following information about manager:\nName :";
gets(name);
cout<<"\nDepartment :";
gets(dept);
cout<<"\nSalary :";
cin>>salary;
}

//to show data to the user
void show()
{
cout<<"\n Manager Name :"<<name<<"\nDepartment :"<<dept<<"\nSalary :"<<salary;
}
};
class Worker:public Manager
{
public:
Worker()
{
cout<<"\nWorker";
getData();
show();
}
};

//main() function for testing
int main()
{
Worker w;
return 0;
}