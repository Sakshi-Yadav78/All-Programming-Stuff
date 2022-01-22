#include <iostream>
using namespace std;
class student
{
private:
	char name[20];
	int rollno;

public:
	void accept()
	{
		cout <<"enter name and rollno";
		cin >> name >> rollno;
	}
	void display()
	{
		cout <<"name ="<< name << endl;
		cout <<"rollno ="<< rollno;
	}
};

int main()
{
	student s1[10];
	student *b;
	for (int i = 0; i < 10; i++)
	{
		b[i].accept();
		b[i].display();
		return 0;
	}
}