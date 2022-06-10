#include <stdio.h>

int main()
{
    int i;

    printf("Enter an integer (1, 2, 3): ");
    scanf("%d", &i);

    switch (i)
    {
    case 1:
        printf("Red\n");
        break;
    case 2:
        printf("Green\n");
        break;
    case 3:
        printf("Blue\n");
        break;
    default:
        printf("The input is invalid\n");
        break;
    }
    return 0;
}