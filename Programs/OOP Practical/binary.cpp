#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class Binary
{
private:
float x;
public:
void setData(int a)
{
x=a;
}
void getData()
{
cout<<"\nx:"<<x;
}

//Defining an operator function + to overload
Binary operator +(Binary b)
{
Binary temp;
temp.x=x+b.x;
return temp;
}

//Defining an operator function - to overload
Binary operator -(Binary b)
{
Binary temp;
temp.x=x-b.x;
return temp;
}
//Defining an operator function * to overload
Binary operator *(Binary b)
{
Binary temp;
temp.x=x*b.x;
return temp;
}

//Defining an operator function / to overload
Binary  operator /(Binary b)
{
Binary  temp;
temp.x=x/b.x;
return temp;
}
};

int main()
{

Binary b1,b2,b3,b4,b5,b6;
b1.setData(20);
b2.setData(10);

//Overloading operator +
b3=b1+b2;
b3.getData();

//Overloading operator -
b4=b1-b2;
b4.getData();

//Overloading operator *
b5=b1*b2;
b5.getData();

//Overloading operator /
b6=b2/b1;
b6.getData();
getch();
}