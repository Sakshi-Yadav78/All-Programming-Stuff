#include <stdio.h>
#include <conio.h>
int main()
{
    int x=0;
	printf("Enter the number:");
    x=Get_Integer_Only();
    printf("\nYou have entered %d",x);
    getch();

}
int Get_Integer_Only()
{
    int num=0;
    int ch;
    for(;;)
    {    ch=getch();
        if(ch>=48 && ch<=57)

        {

           printf("%c",ch);
            num=num*10+(ch-48);
          }
           if(ch==13)
            break;
    }
    return num;
}