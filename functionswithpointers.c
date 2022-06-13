#include <stdio.h>
#include <ctype.h>

// Function prototype
char *encrypt(char *input);

int main()
{
    char* instructions = "Deliver the package to Berlin";
    printf("Here are your secret instructions:\n%s\n", encrypt(instructions));

    return 0;
}

char *encrypt(char *input)
{
    // We want this static because we want
    // the output to stay in memory when we
    // exist the function
    static char output[64];
    int x = 0;

    while(*input)
    {
        if(isalpha(*input))
            output[x] = *input + 1;
        else
            output[x] = *input;
        x++;
        input++;
    }

    return output;
}