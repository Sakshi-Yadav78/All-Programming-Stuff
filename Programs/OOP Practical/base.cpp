#include <iostream>
using namespace std;
class base
{
public: 
        void display()
        {
        cout<<" I am in base class:";
        } 
}; 
class derived : public base
{
public:
        void display()
        {
cout<<"I am in derived class:";
        }
}; 
int main()
{
base b1;
base *ptr;
ptr=&b1; 
ptr->display(); 
derived d1;
ptr=&d1;
ptr->display();
return 0;
}
// refer output online compiler
