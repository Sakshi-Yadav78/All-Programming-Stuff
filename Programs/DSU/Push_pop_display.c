#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define max 10
void push();
void pop();
void display();
int stack[max];
int top = -1;
int main()
{
	int choice;
	do
	{
		printf("\n 1. Push");
		printf("\n 2. Pop");
		printf("\n 3. Display");
		printf("\n 4. Exit");
		printf("\n Enter Choice: ");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			display();
			break;
		case 4:
			exit(0);
			break;
		default:
			printf("Invalid Choice");
		}
	} while (choice != 5);
	getch();
	return 0;
}
void push()
{
	int ele;
	if (top == max - 1)
	{
		printf("Stack is full");
	}
	else
	{
		printf("Enter element: ");
		scanf("%d", &ele);
		top = top + 1;
		stack[top] = ele;
	}
}
void pop()
{
	int ele;
	if (top == -1)
	{
		printf("Stack is empty");
	}
	else
	{
		ele = stack[top];
		top = top - 1;
	}
}
void display()
{
	int i;
	if (top == -1)
	{
		printf("Empty");
	}
	else
	{
		for (i = top; i >= 0; i--)
		{
			printf("\n %d", stack[i]);
		}
	}
}
