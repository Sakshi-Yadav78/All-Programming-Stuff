#include <stdio.h>
#include <conio.h>

int main()
{
    int physics, chemistry, biology, mathematics, french; 
    float per; 

    /* Input marks of five subjects from user */
    printf("Enter five subjects marks:\n");
    scanf("%d%d%d%d%d", &physics, &chemistry,&biology,&mathematics,&french);


    /* Calculate percentage */
    per = (physics + chemistry + biology + mathematics + french) / 5.0;
    printf("Percentage = %.2f\n", per);

    /* Find grade according to the percentage */
    if(per >= 90)
    {
        printf("Grade A");
    }
    else if(per >= 80)
    {
        printf("Grade B");
    }
    else if(per >= 70)
    {
        printf("Grade C");
    }
    else if(per >= 60)
    {
        printf("Grade D");
    }
    else if(per >= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }

    return 0;
}