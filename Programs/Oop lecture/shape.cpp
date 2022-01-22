#include <iostream>
using namespace std;
class shape
{
private: 
 double a;
 double b;

 public: void getdata()
    {
    cout<<"Enter values of a and b:";
    cin>>a>>b;
    }

    virtual void display_area()
    {
    }
};
class triangle : public shape
{
public: 
void display_area()
{
double area=0.5*'a'*'b';
cout<<"Area of triangle:"<<area<<endl;
}
};
class recangle : public shape
{
public: 
void display_area()
{
double area='a'*'b';
cout<<"Area of recangle:"<<area<<endl;
}
};
 
int main()
{
shape *ptr;
 
recangle r1;
ptr=&r1;
ptr->getdata();
ptr->display_area();
 
triangle t1;
ptr=&t1;
ptr->getdata();
ptr->display_area();
 
return(0);
}