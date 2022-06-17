#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* buffer;
    
    /* allocate storage for 20 integers */
    buffer = (int*)malloc(sizeof(int) * 20);
    if(buffer == NULL)
    {
        puts("Unable to allocate memory");
        return 1;
    }

    /* fill and display the buffer */
    for( int x = 0; x < 20; x++)
    {
        *(buffer + x) = x + 1;
        printf("%d\n", *(buffer + x));
    }

    /* free memory allocated at buffer - 
        if buffer was moved forward, then 
        free would not work so don't move 
        pointer, do pointer math like above */
    free(buffer);

    return 0;
}