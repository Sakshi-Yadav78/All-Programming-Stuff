#include <iostream>
using namespace std;
class students 
{
private:
	int roll_number;

public:
	float percentage;

	void accept();

	void display();
};
inline void students::accept()
{
		cout << "Enter student roll_number:";
		cin >> roll_number;

		cout << "Enter student percentage:";
		cin >> percentage;
};
inline void students::display()
{
	cout << " Roll_number of student having higher percentage: " << roll_number << endl;
}

int main()
{
	students s1;
	students s2;
	s1.accept();
	s2.accept();

	if (s1.percentage > s2.percentage)
	{
		s1.display();
	}
	else
	{
	  s2.display();
	}	

	return 0;
}