#include <iostream>
#include <string>
using namespace std;

class Student
{
protected:
	int roll_no;
	string name;

public:
	void accept()
	{
		cout << "Enter your roll no: ";
		cin >> roll_no;
		cout << "Enter your name: ";
		cin >> ws;
		getline(cin, name);
	}

	void display()
	{
		cout << "Your roll no.: " << roll_no;
		cout << "\nYour name: " << name;
	}
};

class Marks : public Student
{
private:
	int m1, m2, m3;
	float percentage;

public:
	void accept()
	{
		Student::accept();
		cout << "Enter your marks of first subject: ";
		cin >> m1;
		cout << "Enter your marks of second subject: ";
		cin >> m2;
		cout << "Enter your marks of third subject: ";
		cin >> m3;
	}

	void display()
	{
		Student::display();

		float total = m1 + m2 + m3;
		percentage = (total / 300.0) * 100.0;
		cout << "\nYour percentage: " << percentage << "\n";
	}
};
int main()
{
	Marks marks;
	cout << "\n-----------------\n";
	marks.accept();
	cout << "-----------------\n";

	cout << "\n-----------------\n";
	marks.display();
	cout << "-----------------\n";

	return 0;
}