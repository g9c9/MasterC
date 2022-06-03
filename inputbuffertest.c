#include <stdio.h>

int main()
{
    int a,b,c;

    printf("Type three characters: ");
    a = getchar();
    putchar(a);
    b = getchar();
    putchar(b);
    c = getchar();
    putchar(c);

    // In this case the buffer flushes when the program ends
    // Input comes in a stream and is stored in a buffer

    return 0;

}