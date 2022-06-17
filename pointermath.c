#include <stdio.h>

int main()
{
    int twos[5] = {2, 4, 6, 8, 10};
    int* pt;

    char alpha[] = "abcd";
    char* pa;

    // ints are 4 bytes so you will see
    // an offset of 4 bytes
    pt = twos;
    printf("%p\n", pt);
    printf("%p\n", pt + 1);

    // chars are 1 byte so you will see
    // an offset of 1 byte
    pa = alpha;
    printf("%p\n", pa);
    printf("%p\n", pa + 1);

    return 1;
}