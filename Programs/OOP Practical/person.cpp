#include <iostream>
using namespace std;

class Person
{
protected:
	char name[20];
	int age;
	char gender[15];

public:
	void accept()
	{
		cout << "Please enter the requested details\n\n"
			 << endl;
		cout << "Enter name of the person: ";
	    cin >> name; 
		cout << "Enter age of the person: ";
		cin >> age;
		cout << " Enter gender of the person: ";
		cin >> gender;
	}

	void display()
	{
		cout << "\n\nThese are the details you just entered\n"
			 << endl;
		cout << "Person name: " << name << endl;
		cout << "Person Age: " << age << endl;
		cout << "Person gender: " << gender << endl;
	}
};

class employee : public Person
{
	protected:
	    int employee_id;
		char company_name[20];
		float salary;
	public:
		void accept()
		{
		cout << "Please enter the requested details\n\n" << endl;
		cout << "Enter emplyee_id: ";
		cin >> employee_id;
		cout << "Enter company_name: ";
		cin >> company_name;
		cout << " Enter salary: ";
		cin >> salary;
		}

		void display()
		{
		cout << "\n\nThese are the details you just entered\n" << endl;
		cout << "Enter company_name : " << company_name << name << endl;
	    cout << " Enter employee_id : " << employee_id << employee_id << endl;
	    cout << "Enter salary: " << salary << salary << endl;
        }
};


int main()
{
	Person Rahul;
	Rahul.accept();
	Rahul.display();

	return 0;
}