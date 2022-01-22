#include <stdio.h>

int main()
{
	int size = 5; 
	int size_id = size / 2 + 1;
	int i,j;

	for(i=1;i<= size;i++)
	{
		for(j=1;j<= size;j++)
		{
			if(j== size_id || i== size ||(i+j == size_id && j <= size_id)) 
			printf(" 1 ");
			else
			printf("   ");
		}
		printf("\n");
	}
   return 0;
}