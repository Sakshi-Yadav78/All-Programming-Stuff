#include <iostream>
using namespace std;

int main()
{
	//Rough Idea
	//371; // The Armstrong Number
	// Now we will take the cube of the actual number 
	//3^3 = 27   // now, the result which we got we will add them to check whether we got the same armstrong number or not
	//7^3 = 343
	//1^3 = 1
        //= 371 // Yes, we got the same number.

    // Program starts
    // First we will create the variable
	int num;
	cout <<" Enter Any Number: ";
	cin >> num;

	// Now we will create another variable
	int n = num;

	// Create the Sum variable
	int sum = 0;

	// Running the while loop
	while (n!=0)
	{
		// Create the remainder variable
		int rem = n%10;

		// Preparing the cube of the last number
		sum = sum + (rem*rem*rem); // cube = 1*1*1

		// Removing the last digit from the actual number
        n = n/10;
	}
	if(sum == num) // cin >> num
	{
		cout << num << " Is an Armstrong number. " << endl;  
	}
	else
    {
		cout << num << " Is not an Armstrong number. " << endl; 
	}
	return 0;
}