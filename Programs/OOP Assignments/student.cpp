#include <iostream>
#include <cstring>
using namespace std;

class student
{
private:
	int age;
	char name[30];
	float per;

public:
	void getdata(int a, char b[], float c)
	{
		age = a;
		strcpy(name, name);
		per = per;
	}
	void display()
	{
		cout << age << " " << endl;
		cout << name << " Rahul " << endl;
		cout << per << " 98.8 " << endl;
	}
};
int main(int)
{
	student s1;
	s1.getdata(12, " Rahul ", 98.8);
	s1.display();

	return 0;
}