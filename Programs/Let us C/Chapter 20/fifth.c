# include <stdio.h>
int main( )
{
unsigned char ;
FILE *fp ;
fp = fopen ( "trial", ârâ ) ;
while ( ( ch = getc ( fp ) ) != EOF )
printf ( "%c", ch ) ;
fclose ( *fp ) ;
return 0 ;
}
//Error in 4th line 