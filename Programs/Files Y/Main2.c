#include <stdio.h>

int main()
{
    int w = 5, x = 6;
    int y = 7, z = 8;
    int r1, r2, r3, r4;

    r1 = w++;
    r2 = ++x;
    r3 = --y;
    r4 = z--;

    printf("%d\n", r1);
    printf("%d\n", r2);
    printf("%d\n", r3);
    printf("%d\n", r4);

    return 0;
}