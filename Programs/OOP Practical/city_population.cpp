#include <iostream>
using namespace std;


class city

{
private:
	int population;

	char name[40];

public:

	void accept();

	void display();
};

void city::accept()

{

	cout << "\n Enter name of city:";

	cin >> name;

	cout << "\n Enter the population of city:";

	cin >> population;
}

void city::display()

{

	cout << "\n Name of City :" << name;

	cout << "\n Population :" << population;
}

int main()

{

	int i;

	city c[10];

	for (i = 0; i <= 9; i++)

	{

		c[i].accept();

		cout << "\n";
	}

	for (i = 0; i <= 9; i++)

	{

		c[i].display();

		cout << "\n";
	}

	return 0;
}