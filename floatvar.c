#include <stdio.h>

int main()
{
    float pi;

    // Does integer division first then casts it to a float, getting 3.0
    pi = 22 / 7;
    printf("The pi value when dividing by ints is %f\n", pi);

    // One value is a float, resulting in float division
    pi = 22.0/7;
    printf("The pi value when dividing by at least one float is %f", pi);
    return 0;
}