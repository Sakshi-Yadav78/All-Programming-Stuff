#include <iostream>
using namespace std;

class person
{
  private:
	  int age;
	  float salary;
	  char name[20];

  public:
    person()

	{
		cout << "Enter age: " << age << endl;
		cin >> age;

		cout << "Enter salary: " << salary << endl;
		cin >> salary;

		cout << "Enter name: " << name << endl;
		cin >> name;
	}

	void display()
	{
		cout <<"age = " << age << endl;

		cout << "salary = " << salary << endl;

		cout <<"name = " << name << endl;
	}
};

int main()
{
	person p1;
	p1.display();

	return 0;
}