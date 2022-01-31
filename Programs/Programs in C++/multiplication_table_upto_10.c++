#include <iostream>
using namespace std;

int main()
{
	//Ask user to enter a number and to store that variable
	int number;
	//We need another variable which will contain the number which we will be going to multiply with the user  
	int multiplier;
	//Ask user to enter the number
	cout << " Enter a number: "<<endl;
	cin >> number;

	//Display the multiplication Table
	for( multiplier = 1; multiplier <= 10; multiplier++ ){
		cout << number << " * " << multiplier << " = "<<(number*multiplier)<<endl;
	}
	return 0;
}