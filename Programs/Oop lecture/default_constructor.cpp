#include <iostream>
using namespace std;

class fraction
{
private:
	int number;
	float numerator;
	char denominator;

public:
	person()

	{
		cout << "Enter numerator: " << number << endl;
		cin>>number;

		cout << "Enter denominator: " << denominator << endl;
		cin>>denominator;
	}

	void display()
	{
		cout << "Numerator: " << numerator << endl;

		cout << "Denominator: " << denominator << endl;
	}
};

int main()
{
	fraction f1;
	f1.display();

	return 0;
}