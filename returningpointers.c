#include <stdio.h>
#include <stdlib.h>

int* makeArray(int size) {
    int* newArray = (int*)malloc(sizeof(int) * size);
    if(newArray == NULL) {
        puts("Error in allocating memory");
        return NULL;
    }

    for(int i = 0; i < size; i++) {
        *(newArray + i) = i * 9;
    }

    return newArray;
}

int main()
{
    int* array = makeArray(9);
    if(array == NULL)
        return 1;
    
    for(int i = 0; i < 9; i++) {
        printf("array[%d] = %d\n", i, *(array + i));
    }

    free(array);
    return 0;
}