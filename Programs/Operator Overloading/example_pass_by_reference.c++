#include <iostream> 
#include <conio.h> 
using namespace std;

class Test { 
public: 
 int & bridge( int & ); 
}; 
 
int & Test::bridge (int & input) 
{ return input; } 
 
int main() 
{ 
 Test a; 
 int b=333; 
 int c = a.bridge(b); 
 cout << "c = " << c << endl; // should be 333 
 a.bridge(b) = 444; 
 cout << "b= " << b << endl; // used to be 333, now should be 444
}