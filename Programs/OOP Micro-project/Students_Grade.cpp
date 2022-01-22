#include <iostream>
using namespace std;

int main()
{
	int no, i;
	float marks[10], per = 0, total = 0;
	cout << "Enter number of subject: ";
	cin >> no;
	cout << "Enter marks of " << no << " subject: ";
	for (i = 0; i < no; i++)
	{
		cin >> marks[i];
	}
	for (i = 0; i < no; i++)
	{
		total = total + marks[i];
	}
	per = total / no;
	cout << "Percentage: " << per << " %" << endl;
	if (per > 85)
	{
		cout << "A grade";
	}
	else if (per < 85 && per >= 75)
	{
		cout << "B grade";
	}
	else if (per < 75 && per >= 50)
	{
		cout << "C grade";
	}
	else if (per < 50 && per >= 30)
	{
		cout << "D grade";
	}
	else
	{
		cout << "Fail";
	}
	return 0;
}