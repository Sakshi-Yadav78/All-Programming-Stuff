#include<iostream>
using namespace std;
class base
{
public:
    virtual void display()
    {
    cout<<"I am in base class:";
    }

    virtual void show()
    {
    cout<<"I am in show fumcton of base class:";
    }
};
 
class derived : public base
{
public:
    void display()
    {
    cout<<"I am in derived:";
    }
 
    void show()
    {
    cout<<" I am in derived functon of derived class:";
    }
};
 
int main()
{
base b1;
base *ptr;
ptr=&b1;
ptr->display();
ptr->show();
 
derived d1;
ptr=&d1;
ptr->display();
ptr->show();
return 0;
}