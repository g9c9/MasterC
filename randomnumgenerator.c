#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int r;

    // Seeds the random generator to have
    // a different seed based on time
    srand((unsigned)time(NULL));

    for(int x = 0; x < 100; x++)
    {
        // Keep numbers between 1 and 100
        r = rand() % 100 + 1;
        // The number has a max width of 4 characters
        printf("%4d", r);
    }
    putchar('\n');

    return 0;
}