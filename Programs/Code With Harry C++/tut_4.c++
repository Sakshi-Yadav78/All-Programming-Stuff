// Pointers and arrays 
#include <iostream>
using namespace std;

int main()
{
	int marks [4] = {12,23,45,67};
	int mathmarks [4];
	mathmarks[0] = 12;
	mathmarks[1] = 23;
	mathmarks[2] = 45;
	mathmarks[3] = 67;

    cout << " These are Mathmarks "<< endl;
	cout << mathmarks[0] << endl;
	cout << mathmarks[1] << endl;
	cout << mathmarks[2] << endl;
	cout << mathmarks[3] << endl;
	
	for (int i = 0; i < 4; i++)
	{
		cout << " The value of marks " << i << " is ";
		cout << marks[i] << endl;

	}
	int* p = marks;
	cout << *(p++) << endl;
	cout << *++p;
	//cout << " The value of marks [0] is " << *p << endl;
	//cout << " The value of marks [0] is " << *(p + 1) << endl;
	//cout << " The value of marks [0] is " << *(p + 2) << endl;
	//cout << " The value of marks [0] is " << *(p + 3) << endl;

	return 0;
}