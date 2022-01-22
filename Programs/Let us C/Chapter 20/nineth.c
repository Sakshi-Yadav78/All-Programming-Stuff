# include <stdio.h>
 int main( )
{
int fp ;
fp = fopen ( "students.dat", READ | BINARY ) ;
if ( fp == -1 )
puts ( "cannot open file\n" ) ;
else
close ( fp ) ;
return 0 ;
}
//There are errors