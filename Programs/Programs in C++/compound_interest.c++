#include <iostream>
using namespace std;

int main()
{
	float principal,principal_balance,rate,time,compound_interest;
	cout << "\nEnter Principal Amount: ";
	cin>>principal;
	cout << "\n Enter Interest Rate: ";
    cin>>rate;
	cout << "\n Enter time perioad in yaers: ";
	cin>>time;
	compound_interest = principal *principal_balance((1+rate/100),time)-principal;
	cout << "\n\n Enter Compound Interest after "<<time<<" Year is: "<<compound_interest;
	cout<<endl;
	return 0;
}