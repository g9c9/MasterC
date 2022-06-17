#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct person {
        char* name;
        int age;
    } *you;
    char buffer[32];

    /* allocate storage for the structure */
    you = (struct person *)malloc(sizeof(struct person) * 1);
    if(you == NULL)
    {
        puts("Unable to allocate storage");
        return 1;
    }

    printf("Enter your name: ");
    fgets(buffer, 32, stdin);
    /* allocate storage for name */
    // (*you).name and you->name are the same
    (*you).name = (char *)malloc((strlen(buffer) + 1) * sizeof(char));
    if((*you).name == NULL)
    {
        puts("Unable to allocate storage");
        return 1;
    }

    /* copy the buffer */
    strcpy(you->name, buffer);
    /* get your age */
    printf("Enter your age: ");
    scanf("%d", &you->age);

    printf("You are %s", (*you).name);
    printf("You are %d years old", (*you).age);
    return 0;
}