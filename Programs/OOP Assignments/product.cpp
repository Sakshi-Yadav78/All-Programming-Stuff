#include <iostream>

#include <string.h>

using namespace std;

class product

{

private:
	int prod_ID, prod_price;

	string prod_name;

public:
	product(int ID, int price, string name)

	{

		prod_ID = ID;

		prod_price = price;

		prod_name = name;
	}

	product(const product &p1)

	{

		prod_ID = p1.prod_ID;

		prod_price = p1.prod_price;

		prod_name = p1.prod_name;

		cout << "Product ID : " << prod_ID << endl;

		cout << "Product Name : " << prod_name << endl;

		cout << "Product Price : " << prod_price << endl
			 << endl;
	}
};

int main()

{

	cout << "Enter details of the product 1 : " << endl;

	int ID, price;

	string name;

	cout << "Enter Product ID : ";

	cin >> ID;

	cout << "Enter Product Name : ";

	cin >> name;

	cout << "Enter Product price : ";

	cin >> price;

	product p11(ID, price, name);

	product p12(p11);

	cout << "Enter details of the product 2 : " << endl;

	cout << "Enter Product ID : ";

	cin >> ID;

	cout << "Enter Product Name : ";

	cin >> name;

	cout << "Enter Product price : ";

	cin >> price;

	product p21(ID, price, name);

	product p22(p21);

	cout << "Enter details of the product : " << endl;

	cout << "Enter Product ID : ";

	cin >> ID;

	cout << "Enter Product Name : ";

	cin >> name;

	cout << "Enter Product price : ";

	cin >> price;

	product p31(ID, price, name);

	product p32(p31);

	return 0;
}