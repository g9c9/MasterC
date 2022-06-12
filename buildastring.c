#include <stdio.h>
#include <string.h>

int main()
{
    char firstName[60];
    char lastName[60];
    char fullName[120];

    printf("Enter your first name: ");
    fgets(firstName, 60, stdin);
    printf("Enter your last name: ");
    fgets(lastName, 60, stdin);

    strcpy(fullName, firstName);
    strcat(fullName, lastName);
    printf("This is your full name: %s", fullName);
    return 0;
}