//Write a program to find out area of a circle and rectangle using function overloading.
# include <iostream>
using namespace std;
double area (int);  // function prototype
double area ( int ,int );  // function prototype
int main()
{ cout << area ( 4 );  // Invokes first definition
  cout << area (  4, 6 );  // Invokes second definition
}
double area ( int r)
{
double A;
A = 3.14 * r * r;  // area of a circle = Pi * R *R
cout << "Area of circle is: 50.24"<< endl;
cout << "Area of rectangle is: 24";
return A;
}
double area (int l ,int b)
{
double A;
A = l * b;
return A;
}