//Confusing the precedences of the various operators.

#include <stdio.h>
#include <conio.h>
int main(int argc, char **argv[])
{
char ch ;
FILE *fp ;
fp = fopen ( "text.c", "r" ) ;
while (  ch = getc ( fp ) != EOF)
putch ( ch ) ;
putch ( ch ) ;
fclose ( fp ) ;

}