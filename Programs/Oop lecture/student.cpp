#include <iostream>
#include<cstring>
using namespace std;

class student
{
private:
	int roll_no;
	char name[30];
	float per;

public:
    void getdata(int a, char b[], float c)
	{
		roll_no = a;
		strcpy(name, name);
		per = per;
	}
void display()
    {
		cout << roll_no << " 12" << endl;
		cout << name << " paras " << endl;
		cout <<per << " 98.8 " << endl;
	}
};
	int main(int)
	{
		student s1;
		s1.getdata( 12, " Paras ", 98.8 );
		s1.display();

		return 0;
	}