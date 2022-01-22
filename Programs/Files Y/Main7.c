#include <stdio.h>
#include <string.h>

int main()
{
    char string[] = "Hello, world!";

    // strlen()
    // int length = strlen(string);
    // printf("Length of the string %s = %d\n", string, length);

    // strcpy()
    // char message[30];
    // strcpy(message, "Hello, world!");
    // printf("%s\n", message);

    // // strcat()
    // char combinedMessage[50] = "Hello, world!";
    // strcat(combinedMessage, " VS Code is awesome");
    // printf("%s\n", combinedMessage);

    // strcmp()
    int status = strcmp("Hello", "Hi there");
    if (status == 0)
        printf("Both the strings are exactly the same\n");

    else
        printf("Both the strings are not exactly the same\n");

    return 0;
}