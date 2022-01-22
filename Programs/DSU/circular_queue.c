#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define max 5
int queue[max];
int front = -1, rear = -1;
void insert(void);
int delete_element(void);
void display(void);
int main()
{
	int option, val;
	do
	{
		printf("\n \n ***** MAIN MENU *****");
		printf("\n 1.Insert an element");
		printf("\n 2.Delete an element");
		printf("\n 3.Display the queue");
		printf("\n 4.EXIT");
		printf("\n *********************");
		printf("\n \n Enter your option: ");
		scanf("%d", &option);
		switch (option)
		{
		case 1:
			insert();
			break;
		case 2:
			val = delete_element();
			printf("\n The number that was deleted is: %d", val);
			break;
		case 3:
			display();
			break;
		case 4:
			break;
		default:
			printf("\n Wrong choice");
		}
	} while (option != 5);
	return 0;
}
void insert()
{
	int num;
	printf("\n Enter the number to be inserted in the queue: ");
	scanf("%d", &num);
	if (front == 0 && rear == max - 1)
		printf("\n OVERFLOW");
	else if (front == -1 && rear == -1)
	{
		front = rear = 0;
		queue[rear] = num;
	}
	else if (rear == max - 1 && front != 0)
	{
		rear = 0;
		queue[rear] = num;
	}
	else
	{
		rear++;
		queue[rear] = num;
	}
}
int delete_element()
{
	int val;
	if (front == -1)
	{
		printf("\n UNDERFLOW");
		return -1;
	}
	val = queue[front];
	if (front == rear)
		front = rear = -1;
	else
	{
		if (front == max - 1)
			front = 0;
		else
			front++;
	}
	return val;
}
void display()
{
	int i;
	printf("\n");
	if (front != -1 && rear != -1)
	{
		if (front < rear)
		{
			for (i = front; i <= rear; i++)
				printf("\t %d", queue[i]);
		}
		else
		{
			for (i = 0; i < max; i++)
				printf("\t %d", queue[i]);
			for (i = front; i < rear; i++)
				printf("\t %d", queue[i]);
		}
	}
}
