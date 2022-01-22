# include <stdio.h>
 int main( )
{
char fname[ ] = "c:\\students.dat" ;
FILE *fp ;
fp = fopen ( fname, "tr" ) ;
if ( fp == NULL )
printf ( "Unable to open file...\n" ) ;
return 0 ;
}
//No error