#include <stdio.h>

int main()
{
    int x, y, z;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &x, &y, &z);

    if (x > y)
    {
        if (x > z)
        {
            printf("%d is the greatest number", x);
        }

        else 
        {
            printf("%d is the greatest number", y);
        }
    }

    else
    {
        printf("%d is the greatest number", z);
    }

    return 0;
}