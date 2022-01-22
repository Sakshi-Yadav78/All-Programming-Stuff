#include <iostream>
using namespace std;

struct student
{
	char name[50];
	int roll;
};

int main()
{
	student s;
	cout << "Enter information," << endl;
	cout << "Enter name: ";
	cin >> s.name;
	cout << "Enter roll number: ";
	cin >> s.roll;
	

	cout << "\nDisplaying Information," << endl;
	cout << "Name: " << s.name << endl;
	cout << "Roll: " << s.roll << endl;
	
	return 0;
}