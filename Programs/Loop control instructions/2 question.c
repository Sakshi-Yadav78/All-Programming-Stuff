#include <stdio.h>

int main()
{
    int n, fact = 1;
    printf("enter the number\n");
    scanf("%d", &n);
    while (n)

    {
        fact = fact*n;
        n--;
    }
    printf("factorial:%d",fact);

    return 0;
}