#include <stdio.h>
#include <conio.h>

int main()
{
	int ch;
	printf(" \n Press 1: For Red ");
	printf("\n Press 2: For Yellow ");
	printf("\n Press 3: For Green ");

	printf(" \n\n Enter your choice ");
	scanf("%d", &ch);
	switch (ch)
	{
		case 1: 
		   printf(" \n Stop ");
		   break;
		case 2: 
		    printf(" \n Ready ");
		    break;
		case 3: 
		    printf(" \n Go ");
			break;
		default:
		     printf("! Sorry wrong choice");
	}

}