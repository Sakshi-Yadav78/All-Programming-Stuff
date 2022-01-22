# include <iostream>
using namespace std;

class person
{
protected:
	int age;
	char name[5];
	char gender[5];

public:
	void getdata()
	{
		cout << " Enter name: " << name << endl;
		cout << "\n gender: " << gender << endl;
		cout << " age: " << age << endl;
		cin >> name >> age >> gender;
	}
	void showdata()
	{
		cout << "\n age= " << age << endl;
		cout << "\n Name = " << name << endl;
		cout << "\n gender =" << gender;
	}
};
class employee : public person
{
protected:
	int id, salary;
    char company_name[30];

public:
	void input()
	{
		person ::getdata();
		cout << "\n Enter salary: " << salary << endl;
		cout << "\n Company name: " << company_name <<endl;
		cout << "\n id: " << id << endl;
		cin >> salary >> id >> company_name;
	}
	void output()
	{
		person ::showdata();
		cout << "\n Id= " << id << endl;
		cout << "\n Salary= " << salary << endl;
		cout << "\n Comp name= " << company_name << endl;
	}
};
class programmer : public employee
{
private:
	int language_known;

public:
	void accept()
	{
		employee::input();
		cout <<"Enter number.of.programming_language_known :";
		cin >> language_known;
	}
	void display()
	{
		employee ::output();
		cout << language_known;
	}
};
int main()
{
	programmer p1;
	p1.accept();
	p1.display();
	return 0;
}