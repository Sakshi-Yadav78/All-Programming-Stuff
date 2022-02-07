#include <stdio.h>
#include <conio.h>
#include <ctype.h> //useful for testing and mapping characters.

int main()
{
	//These are three questions set with 2 dimensional character array
	char questions [][100] = {"1. What year did the C language debut? ",
	                         " 2. Who is credited with creating C? ",
						     " 3. What is the predecessor of C? "};

    //We will create four sets of options for the above questions with 2 dimensional character array
	char options [][100] = {"A. 1969 ", " B. 1972 ", " C. 1975 ", " D. 1999",
	                       " A. Dennis Ritchie ", " B. John Carmack ", " C. Nikola Tesla ", " D. Doc Brown ", 
						   " A. Objective C ", " B. B ", " C. C++ ", " D. C# "};
	
	// This will be the Answer key with 1 dimensional array
	char answers[3] = {'B', 'A', 'B'};
	//Calculate the number of questions that we have
	int numberofquestions = sizeof(questions)/sizeof(questions[0]);  //sizeof operator pass in our 2d array of questions and divide this by one of the elements with index 0
    //To store guess we use 
	char guess;
	// to keep track of the player's score we use 
	int score;

	printf(" QUIZ GAME\n ");

	// We need to loop through all of the questions , so let's use a for loop 
	for( int i = 0; i < numberofquestions; i++ )
	{
		printf("***********************************\n"); //test decorations
		printf("%s\n", questions[i]);  //We are displaying a string so use the s format specifier
		printf("***********************************\n");

		//Let's display the possible options of answer,for that we need nested for loop and this part will be lit bit tricky
		//This for loop will cycle four times  beginning at every fourth string 
		for(int j = (i*4); j < (i*4) + 4; j++)  //i*4 we required this coz we will begin our for loop at every fourth string
		{
			printf("%s\n",options[j]);
		}
		//User input after the nested for loop
		printf(" guess: ");
		scanf("%c", &guess);  //we are accepting a single character and use the address of operator
		scanf("%c"); //claer the new line character from input buffer

		guess = toupper(guess); //we're passing in our guess making it uppercase and reassigning it to our guess
		if(guess == answers[i])
		{
            printf("CORRECT!\n");
			score++;
		}
		else
		{
           printf("WRONG!\n");
		}
	}

    printf("***********************************\n");
	printf(" FINAL SCORE: %d/%d\n", score, numberofquestions); //I'm going to display 2 values , so the first will be the player score divided by the number of questions
    printf("***********************************\n");
	return 0;
}