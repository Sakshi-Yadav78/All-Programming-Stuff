#include <iostream>
#include <array>
using namespace std;

int main()
 {
	int number;
	string array[] = {""," One", " Two", " Three", " Four", " Five", " Six", " Seven",
	                 "Eight","Nine","Ten","Eleven","Twelve","Thirteen","Fourteen","fifteen",
					 "Sixteen","Seventeen","Eighteen","Nineteen","Twenty","Thirty","Fourty",
					 "Fifty","Sixty", "Seventy","Eighty","Ninety","Hundred"};
	// We will get the word conversation in the array
	cout << " Enter a whole number: ";
	cin >> number;

	// Now we set the condition
	if(number > 20)	{
		int leftmostDigit = number/10; //we need to get the left digit and make it as an array position
		cout << array [18 + leftmostDigit] << " "; //this is for numbers from 30 to 90
		number -= leftmostDigit * 10; // This will return back the value
	}

	cout << array [number]; // This is for the numbers in the rightmost position or the one's values	 
	return 0;
}