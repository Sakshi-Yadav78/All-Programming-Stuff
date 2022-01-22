#include <iostream>
#include <conio.h>
using namespace std;



int main()
{
	int day;

	cout << "Enter value for day ";
	cin >> day;

	switch (day)
	{
	case 1:
		cout << "monday";
		break;
	case 2:
		cout << "Thusday";
		break;
	case 3:
		cout << "Wednesday";
		break;
	case 4:
		cout << "thrusday";
		break;
	case 5:
		cout << "friday";
		break;
	case 6:
		cout << "saturday";
		break;
	case 7:
		cout << "sunday";
		break;
	default:
		cout << "enter value between 1 to 7";

		return 0;
	}
	
}
