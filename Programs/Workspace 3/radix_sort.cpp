#include <iostream>
using namespace std;

int main()
{
	int size = 0;
	int Radix;
	int Sort;
	cout << " Enter the size of the array: " << endl;
	cin >> size;

	int array[size];
	cout << " Enter " << size << " integers in any order" << endl;

	for(int i = 0; i < size;i++)
	cin >> array[i];

	cout  << endl << " Before sorting: " << endl;
    
    for(int i = 0; i < size;i++)
		cout << array[i] << " ";

	cout << endl << " After sorting: " << endl;

	for(int i = 0; i < size;i++)
	cout << array[i] << " ";

	return 0;
}