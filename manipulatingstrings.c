#include <stdio.h>
#include <string.h>

int main()
{
    char string[] = "Just how long am I?";
    int len;

    len = strlen(string);
    printf("The following string:\n %s is %d characters long. \n", string, len);

    char input[64]; /* 63 characters plus null */

    printf("Instructions: ");
    fgets(input,64,stdin);
    len = strlen(input); // Newline character would be included
    printf("You typed %d characters of instructions. \n", len);

    // Combining two strings together by build new string
    //  - Build new buffer
    //  - Copy first string into new buffer
    //  - Append second string into buffer

    char first[] = "I would like to go ";
    char second[] = "from here to there\n";
    char buffer[50];

    strcpy(buffer, first);
    strcat(buffer, second);
    puts(buffer);

    return 0;
}