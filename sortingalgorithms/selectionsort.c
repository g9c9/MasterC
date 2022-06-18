#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* genArray(int size)
{
    int *array = (int*)malloc(sizeof(int) * size);
    srand((unsigned)time(NULL));
    for(int i = 0; i < size; i++)
    {
        *(array + i) = rand() % 100;
    }
    return array;
}

void selectionSort(int* array, int size)
{
    for(int start = 0; start < size - 1; start++)
    {
        int minIdx = start;
        for(int p = start; p < size; p++)
        {
            if(*(array + p) < *(array + minIdx))
                minIdx = p;
        }
        if(minIdx != start)
        {
            int temp = *(array + start);
            *(array + start) = *(array + minIdx);
            *(array + minIdx) = temp;
        }
    }
}

int main()
{
    int *array = genArray(10);

    printf("Unsorted Array: ");
    for(int i = 0; i < 10; i++)
    {
        printf("%3d ", *(array + i));
    }
    
    selectionSort(array, 10);

    printf("\n  Sorted Array: ");
    for(int i = 0; i < 10; i++)
    {
        printf("%3d ", *(array + i));
    }
    printf("\n");
    return 0;
}