#include <iostream>
using namespace std;

class city
{
	char city_name[20];

public:
	int population;
	void accept()
	{
		cout << "Enter City Name: ";
		cin >> city_name;
		cout << "Enter City Population: ";
		cin >> population;
	}
	void display()
	{
		cout << endl;
		cout << "Highest Population in the city -" << endl;
		cout << "City Name = " << city_name << endl;
		cout << "City Population = " << population << endl;
	}
};

int main()
{
	int i, j, temp;
	city c[5];
	for (i = 0; i < 5; i++)
	{
		c[i].accept();
	}
	for (j = 0; j < 5; j++)
	{
		for (j = 0; j < 4; j++)
		{
			if (c[j].population > c[j + 1].population)
			{
				city temp = c[j];
				c[j] = c[j + 1];
				c[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < 1; i++)
	{
		c[4].display();
	}
	return 0;
}