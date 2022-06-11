#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch = 'a';

    printf("Original %c\n", ch);
    printf("Lowercase %c\n", tolower(ch));
    printf("Uppercase %c\n", toupper(ch));

    // Check if a character is part of the alphabet
    // isalpha function is used
    int acter;

    do
    {
        acter = getchar();
        if(isalpha(acter))
            putchar(acter);
    } while (acter != '\n');

    // Check if a character is a number
    // isdigit function is used

    int acter2;

    do
    {
        acter2 = getchar();
        if(isdigit(acter2))
            putchar(acter2);
    } while (acter2 != '\n');
    
    return 0;
}