#include <stdio.h>

int main()
{
	int basic_salary;
	int dearness_allowance, rent_allowance;
	int gross_salary;
	printf("Enter your base salary: ");
	scanf("%d", &basic_salary);

	dearness_allowance = (basic_salary * 40) / 100;
	rent_allowance = (basic_salary * 20) / 100;

	gross_salary = basic_salary + dearness_allowance + rent_allowance;

	printf("Your gross salary is %d", gross_salary);

	return 0;
}