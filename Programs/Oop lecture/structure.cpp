#include <iostream>
using namespace std;

struct book{
	char title[40];
	char authors[30];
	float price;
};

int main(int argc, char **argv)
{
	book b1, b2;

	cout << " Enter book title: ";
	cin >> b1.title;

	cout << " Enter book price: ";
	cin >> b1.price;

	cout << " Enter book author: ";
	cin >> b1.authors;

	return 0;
}