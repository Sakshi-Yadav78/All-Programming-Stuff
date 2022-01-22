#include <iostream>
#include <string.h>
using namespace std;

class student

{

	int roll_no;

	char name[20];

	float percentage;

public:
	student(int rno, char *n, float per)

	{

		roll_no = rno;

		strcpy(name, n);

		percentage = per;
	}

	void display()

	{

		cout << "\n Roll No:" << roll_no;

		cout << "\n Name:" << name;

		cout << "\n Percentage:" << percentage;
	}
};

int main()

{

	student s1(112, " Chitrakshi", 89), s2(114, "Anjali", 98);

	s1.display();

	s2.display();

	return 0;
}