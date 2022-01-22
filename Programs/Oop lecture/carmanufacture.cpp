#include <iostream>
using namespace std;

class Car_manufacture
{
protected:
    char name[20];
public:
  void getdata()
  {
	  cout << " Enter the Car Manufacture : ";
	  cin >> name;
  }
};

class Car_model: public Car_manufacture
{
  protected:
    char model_name[20];
    char model_number[10];
  public:
     void acceptModel()
     {
       Car_manufacture ::getdata();
       cout << " Enter model_number: ";
       cin >> model_number;

       cout << " Enter model_name: ";
       cin >> model_name;
     }
};
class car: public Car_model 
{
  private:
     char car_number[10];
     char colour[8];

  public:
    void carinput()
    {
      Car_model ::acceptModel();
      cout << " Enter car_number (Registered in RTO Office) :";
      cin >> car_number;

      cout << " Enter the car colour :";
      cin >> colour;
    }
};

int main()
{
  car c1;
  c1.carinput();
  return 0;
}