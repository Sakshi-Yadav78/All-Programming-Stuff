#include<iostream> 
#include<conio.h> 
using namespace std;
class Employee
{
int empid,empcode; 
public:
    void emp()
{
cout<<"\nEnter an employee id "; 
cin>>empid;
cout<<"\nEnter an employee code "; 
cin>>empcode;
}
virtual void display()
{
cout<<"\nEmployee id "<<empid; 
cout<<"\nEmployee code"<<empcode;
}
};
class Programmer : public Employee
{
char Skill[10]; 
public:
void getskill()
{
cout<<"\nEnter a Skill for Programmer "; 
cin>>Skill;
}
void display()
{
cout<<"\nThe Programmer Skill is "<<Skill;
}
};
class Manager : public Employee
{
char department[10]; 
public:
void getdept()
{
cout<<"\nEnter a Department for Manager "; 
cin>>department;
}
void display()
{
cout<<"\nThe Department of Manager is "<<department;
}
};
int main()
{
Employee e, *eptr; 
Programmer p;
Manager m; 
cout<<"\nFor Programmer Class "; 
eptr = &e;
eptr->emp();
p.getskill(); 
eptr->display(); 
eptr= &p;
eptr->display();
 
cout<<"\nFor Manager Class "; 
eptr = &e;
eptr->emp();
m.getdept(); eptr->display(); 
eptr= &m;
eptr->display();
 
getch();
}