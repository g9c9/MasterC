#include <stdio.h>

int main()
{
    /* This is an array of char pointers.
       This array is really storing memory
        locations of each string. The string
        is allocated in memory. */
    char *presidents[5] = {
        "Washington",
        "Adams",
        "Jefferson",
        "Madison",
        "Monroe"
    };
    char *ptr;

    for(int x = 0; x < 5; x++)
    {
        ptr = *(presidents + x);
        while(*ptr)
        {
            putchar(*ptr);
            ptr++;
        }
        putchar('\n');
    }
    
    return 0;
}