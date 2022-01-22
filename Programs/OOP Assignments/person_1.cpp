#include <iostream>
using namespace std;

class Person
{
private:
	string name;
	int age;

public:
	void accept()
	{
		cout << "Please enter the requested details\n\n"
			 << endl;
		cout << "Name: ";
		// cin >> name; This line of code won't work
		getline(cin, name); // Use this line of code
		cout << "Age: ";
		cin >> age;
	}

	void show_data()
	{
		cout << "\n\nThese are the details you just entered\n"
			 << endl;
		cout << "Your name: " << name << endl;
		cout << "Your Age: " << age << endl;
	}
};

int main()
{
	Person john;
	john.accept();
	john.show_data();

	return 0;
}