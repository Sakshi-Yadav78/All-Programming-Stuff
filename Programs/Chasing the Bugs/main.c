//Omitting the ampersand before the variables used in scanf( ).
#include <stdio.h>
#include <conio.h>
int main() 
{
int choice ;
printf(" Enter the dress code of your choice ");
scanf ( "%d", choice ) ; // &choice

return 0;
}