#include <iostream>
using namespace std;

int main()

{
	int a = 3; // ordinary variable
	int *p; // pointer variable
	p = &a; // p stores the address of  a
	cout << "Adress of a = " << &a << endl;
	cout << " Address of a = " << p << endl;
	cout << "Value of a = "<< a << endl;
	cout << "value of a = " << *p << endl;

	return 0;
}