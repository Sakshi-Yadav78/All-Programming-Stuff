// Write a program to create class worker having data member as name and skill (' plumber ' , ' fitting ' etc) Accept this details for five workers and display the output//
#include <iostream>
#include <string>
using namespace std;

class Worker
{
private:
	string name;
	string skill;

	string to_lower(string str)
	{
		string lower = "";

		for (char &character : str)
		{
			if (character >= 'A' && character <= 'Z')
				lower += character + 32;
			else
				lower += character;
		}
	}

public:
	void accept()
	{
		cout << "\nEnter name: ";
		cin >> ws;
		getline(cin, name);

		cout << "Skill: ";
		cin >> ws;
		getline(cin, skill);
	}

	void display()
	{
		if (to_lower(skill) == "plumber")
			cout << name << endl;
	}
};

int main()
{
	Worker workers[5];
	for (int i = 0; i < 5; i++)
		workers[i].accept();

	cout << "\n\nNames of the plumbers are\n";

	for (int i = 0; i < 5; i++)
		workers[i].display();

	return 0;
}