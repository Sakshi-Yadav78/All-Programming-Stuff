#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define MICRO_TO_MILI 1000

const int PROG_BAR_LENGTH = 25;

void update_bar(int);
int main()
{
	printf("\n\n");
	for (int i = 0; i <= 100; i++)
	{
		update_bar(i);
		usleep(100 * MICRO_TO_MILI);
	}
	printf("\n\n");

	return 0;
}

void update_bar(int percent_done)
{
	int completed = percent_done * PROG_BAR_LENGTH / 100;
	int not_completed = PROG_BAR_LENGTH - completed;

	printf("\r[");

	for (int i = 0; i < completed; i++)
		printf("#");

	for (int i = 0; i < not_completed; i++)
		printf(".");

	printf("] %d%% done", percent_done);
	fflush(stdout);
}