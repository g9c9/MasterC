#include <stdio.h>

#define GRIDSIZE 3

int main()
{
    int grid[GRIDSIZE][GRIDSIZE];
    int row, col;

    // initialize the array
    for(row = 0; row < GRIDSIZE; row++)
        for(col = 0; col < GRIDSIZE; col++)
            grid[row][col] = 0;
    
    // Set value in grid to 1
    grid[1][1] = 1;

    // display the grid
    for(row = 0; row < GRIDSIZE; row++)
    {
        for(col = 0; col < GRIDSIZE; col++)
            printf("%d ", grid[row][col]);
        putchar('\n');
    }

    return 0;
}