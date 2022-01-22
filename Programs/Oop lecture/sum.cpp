#include <iostream>
using namespace std;
class array
{
private:
	int a[10], n; // array as a data member
public:
	void getdata(void);
	void add(void);
};
void array ::getdata(void)
{
	cout << "Enter how many numbers ?";
	cin >> n;
	cout << "Enter " << n << "numbers :" << endl;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
void array ::add(void)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = sum + a[i];
	}
	cout << "SUM = " << sum;
}
int main()
{
	array stud;
	stud.getdata();
	stud.add();
	return 0;
}