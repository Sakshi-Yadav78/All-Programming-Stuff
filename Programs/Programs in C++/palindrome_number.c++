#include <iostream>
using namespace std;

int main()
{
	//take input from user & check the palindrome condition
	cout << " Enter a number if its palindrome or not: " << endl;

	//create a few variables
	int n,num,digit,rev=0;
	
	//input from the user
	cin >> num; //121
    n = num;
	while (num!=0)
	{
		digit = num%10; //digit = 121%10 = 1 ||digit = 12%10=2
        rev = (rev*10)+digit; // rev = (0*10)+1 = 1 ||rev = (1*10)+2 = 10+2=12  
		num = num/10; // 121/10 = 12  num = num/10 = 12/10=1
	}

	if(n==rev)
	{
		cout << " Palidrome " << endl;
	}
	else
	{
		cout << " Not Palidrome " << endl;
	}
	return 0;
}