#include <iostream>
using namespace std;

class Fraction
{

public:
	Fraction()
	{
		numerator = 0;
		denominator = 1;
	}

	void print() const
	{
		cout << numerator << "/" << denominator;
	}

private:
	int numerator;	 
	int denominator; 

}; 


int main()
{
	
	Fraction f1;
	f1.print();
	cout << endl;

	Fraction f2;
	f2.print();
	cout << endl;

	Fraction f3;
	f3.print();
	cout << endl;

	return 0;
}
