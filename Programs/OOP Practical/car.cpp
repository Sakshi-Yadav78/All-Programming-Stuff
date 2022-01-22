#include <iostream>
using namespace std;

class car
{
protected:
	char name[20];
	int car_type;

public:
	void accept()
	{
		cout << "Enter name of the car:" << endl;
		cin >> name;
		cout << "Enter car_type:" << endl;
		cin >> car_type;
	}
	void display()
	{
		cout << "name of the car is:" << name << endl;
		cout << "car_type is :" << car_type << endl;
	}
};
class brand : public car
{
protected:
	int brand_id;
	char brand_name[20];
	int brand_colour;

public:
	void accept1()
	{
		brand ::accept();
		cout << "Enter name of the brand:" << endl;
		cin >> brand_name;
		cout << "Enter brand_id:" << endl;
		cin >> brand_id;
		cout << "Enter brand_colour of the car:" << endl;
		cin >> brand_colour;
	}

	void display1()
	{
		brand ::display();
		cout << "name of the brand is:" << brand_name << endl;
		cout << "brand_id is :" << brand_id << endl;
		cout << "brand_colour is :" << brand_colour << endl;
	}
};
class model_data : public brand
{
private:
	char model_name;
	float price;

public:
	void input()
	{
		brand ::accept1();
		cout << "Enter model name of the car :" << model_name << endl;
		cin >> model_name;
		cout << "Enter price :" << price << endl;
		cin >> price;
	}

	void output()
	{
		brand ::display1();
		cout << "Enter model name of the car :" << model_name << endl;
		cout << "Enter price :" << price << endl;
	}
};

int main()
{
	model_data m1;
	m1.input();
	m1.output();

	return (0);
}