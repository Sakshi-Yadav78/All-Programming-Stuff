#include <iostream>

#include <cstring>

using namespace std;

class person

{

public:
	string name , address ,mobile_number;

	int accept()

	{

		cout << "Enter name : ";

		cin >> name;

		cout << "Enter address : ";

		cin >> address;

		cout << "mobile_number : ";

		cin >> mobile_number;
	}

	int display()

	{

		cout << "person name : " << name  << endl;

		cout << "person address : " << address << endl;

		cout << "person mobile number : " << mobile_number << endl;
	}
};

int main()

{

	int n;

	cout << "Enter number of person : ";
	cin >> n;
     cout << "Enter person address : ";
	cin >> n;
	 cout << "Enter person mobile_number : ";
	cin >> n;

	return 0;
}