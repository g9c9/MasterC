#include <stdio.h>

int main()
{
    int array[] = {11, 13, 17, 19};
    int *aptr;

    char cArray[] = {'A', 'B', 'C', 'D'};
    char * captr;

    aptr = array;   // no & needed for an array
    captr = cArray;

    printf("The element is %d\n",*(aptr+3));
    printf("The element is %d\n",array[3]);
    printf("The element is %c\n",*(captr+3));
    printf("The element is %c\n",cArray[3]);

    return 0;
}