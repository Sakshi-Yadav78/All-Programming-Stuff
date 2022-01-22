//Using the operator = instead of the operator ==.
#include <stdio.h>
#include <conio.h>
int main()
{
int i = 10 ;
while ( i = 10 )
{
printf ( "got to get out" ) ;
i++;
}
}