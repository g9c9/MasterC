#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char* fruits[10];
    char buffer[32];

    for(int i = 0; i < 10; i++)
    {
        printf("Enter fruit %d: ", i + 1);
        fgets(buffer, 32, stdin);
        fruits[i] = (char*)malloc((strlen(buffer) + 1) * sizeof(char));
        if(fruits[i] == NULL)
        {
            puts("Memory failed to be allocated");
            return 1;
        }

        strcpy(fruits[i], buffer);
    }

    printf("Here are all the fruits you entered:\n");
    for(int i = 0; i < 10; i++)
    {
        printf("Fruit %d: %s", i + 1, *(fruits + i));
    }

    /* free memory */
    for(int i = 0; i < 10; i++)
    {
        free(fruits[i]);
    }
    return 0;
}