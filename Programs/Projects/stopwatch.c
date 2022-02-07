#include <stdio.h>
#include <conio.h>
#include <unistd.h>  //defines miscellaneous symbolic constants and types, and declares miscellaneous functions

int main()
{
    int hours = 0, minutes = 0, seconds = 0, milliseconds = 0;
	while(1){
		printf("\r\t%.2d HOURS: %.2d MINUTES: %.2d SECONDS: %.2d", hours, minutes, 
	          seconds,milliseconds); 
			usleep(1000);  //API that suspends the current process for the number of microseconds passed to it. 
			++milliseconds;
	    if(milliseconds == 999){
		   milliseconds = 0;
		   ++seconds;
		}
		if(seconds == 60)
		{
			milliseconds = 0;
			seconds = 0;
			++minutes;
		}
		if(minutes == 60)
		{
			milliseconds = 0;
			seconds = 0;
			minutes = 0;
			++hours;
		}
		}
	return 0;
}