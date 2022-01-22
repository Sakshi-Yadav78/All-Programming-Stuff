#include <iostream>
using namespace std;

class college
{
	protected:
		int college_code;
	public:
	  void get_college()
	  {
		  cout << " Enter college_code" << endl;
		  cin >> college_code;
	  }
};
class student : public college
{
	protected:
	  int roll_number;
	  char name[2];
	public:
		  void getstudent()
		  {
		college ::get_college();
		cout << "enter roll_no:";
		cin >> roll_number;
		cout << "enter name:";
		cin >> name;
}
}
;
class result : public student
{
private:
	float grade;

public:
	void getresult()
	{
		student ::getstudent();
		cout << "Enter grade:";
		cin >> grade;
	}
};
int main()
{
	result r1;
	r1.getresult();
	return (0);

}
