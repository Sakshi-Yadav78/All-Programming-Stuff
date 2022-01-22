# include <stdio.h>
# include <stdlib.h>
int main( )
{
FILE *fp ;
char c ;
fp = fopen ( "TRY.C" ,"r" ) ;
if ( fp == null )
{
puts ( "Cannot open file\n" ) ;
exit( ) ;
}
while ( ( c = getc ( fp ) ) != EOF )
putch ( c ) ;
fclose ( fp ) ;
return 0 ;
}
// Error is in 14th line that is putch 
// It should be putc only
