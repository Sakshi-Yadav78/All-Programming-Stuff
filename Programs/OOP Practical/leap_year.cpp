#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int year;

	cout << "Enter value for year in 4 digit";
	cin >> year;

	if (year % 4 == 0)

		cout << year << "is leap year!!";

	else

		cout << year << "is not leap year!!";

	return 0;
}