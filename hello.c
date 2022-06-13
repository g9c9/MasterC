#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int main()
{
    char *textBuffer = malloc(sizeof(char) * SIZE);
    if(textBuffer == NULL)
    {
        puts("Unable to allocate memory");
        return 1;
    }

    printf("What is your name?: ");
    fgets(textBuffer, SIZE, stdin);
    printf("Hello %s, nice to meet you!", textBuffer);

    return 0;
}