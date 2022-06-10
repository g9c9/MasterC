#include <stdio.h>

int main()
{
    char string[] = "Hello World!";

    printf("The string is %s\n", string);

    char input[64]; /* 63 characters plus null */

    printf("Instructions: ");
    fgets(input, 64, stdin); /* Gets string from stdin and puts it into input */
    /*Prints strings into output buffer */
    puts("Thank you! Here are your instructions:");
    puts(input);

    return 0;
}