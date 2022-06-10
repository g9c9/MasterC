#include <stdio.h>
#include <math.h>

int main()
{
    float r;

    // Function from math library
    r = sqrt(2.0);

    printf("The square root of 2 is %f\n", r);

    float p;

    // Requires two doubles as arguments
    p = pow(2.0, 8.0);

    printf("2 to the 8th power is %f\n", p);

    return 0;
}