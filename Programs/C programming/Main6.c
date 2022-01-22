#include <stdio.h>

int main()
{
    int x = 3;
    int *pointer = &x;

    printf("x = %d\n", *pointer);
    printf("Address of x = %u\n", pointer);

    // %u unsigned integer 
    // unsigned integer means always positive
    // signed integer means both positive and negative
    // %u means compulsory positive its never negative

    return 0;
}