#include <stdio.h>

int main()
{
    int x;

    printf("Enter an integer: ");
    scanf("%d", &x);
    printf("Integer: %d\n", x);

    float y;

    printf("Enter a real number: ");
    scanf("%f", &y);
    printf("Real number: %f\n", y);

    // This will always get the new line after the real number is entered
    char c;

    printf("Type a character: ");
    scanf("%c", &c);
    printf("Character: %c", c);

    return 0;
}