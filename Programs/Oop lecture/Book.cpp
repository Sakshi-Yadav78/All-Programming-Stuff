#include <iostream>
using namespace std;

struct book
{
	char title[40];
	char authors[30];
	float price;
};

int main(int argc, char **argv)
{
	book b[10];

	int i;
	for (i = 0; i < 10; i++)
	{
		cout << " Enter book title: ";
		cin >> b[1].title;

		cout << " Enter book price: ";
		cin >> b[1].price;

		cout << " Enter book author: ";
		cin >> b[1].authors;
	}

	return 0;
}