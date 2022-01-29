#include <iostream>
using namespace std;

int main()
{
	//declare the variables
	int i, j;
	//value to the variables
	i = 6;
	j = 8;

	//printing the values before swapping the variables
	cout <<" Before Swapping i: "<< i << " j: " << j << endl;

	//without using a temporary variable
	i = i+j; // add the variable , 6+8=14
	j = i-j; // sub the variable , 14-8=6
	i = i-j; // 14-6=8

   cout <<" After Swapping i: "<< i << " j: " << j << endl;

	return 0;
}