#include <stdio.h>

int main(int argc, char* argv[])
{
    printf("%d arguments found:\n", argc);
    for(int x = 0; x < argc; x++)
        printf("\t%d: %s\n", x, argv[x]);
    return 0;
}