# include <stdio.h>
 int main( )
{
FILE *fp ;
char str[ 80 ] ;
fp = fopen ( "TRY.C", "r" ) ;
while ( fgets ( str, 80, fp ) != EOF )
fputs ( str ) ;
fclose ( fp ) ;
return 0 ;
}
// Error in 8th line