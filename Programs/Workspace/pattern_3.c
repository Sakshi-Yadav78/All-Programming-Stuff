#include <stdio.h>

int main()
{
	int size = 5; 
	int size_id = size / 2 + 1 ;
	int i,j;

	for(i=1;i<=size;i++)
	{
		for(j=1;j<=size;j++)
		{
			if(i== 1|| i== size_id || i == size || j == size)
			printf(" 3 ");
			else
			printf("   ");
		}
		printf("\n");
	}
   return 0;
}