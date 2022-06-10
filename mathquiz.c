#include <stdio.h>
#include <math.h>

int main()
{
    float a, b;

    // Remember to put ampercand in scanf
    printf("Enter float value for a: ");
    scanf("%f", &a);
    printf("Enter float value for b: ");
    scanf("%f", &b);

    printf("%f + %f = %f\n", a, b, a + b);
    printf("%f - %f = %f\n", a, b, a - b);
    printf("%f * %f = %f\n", a, b, a * b);
    printf("%f ^ %f = %f\n", a, b, pow(a, b));
    printf("square root of %f = %f\n", a, sqrt(a));
    printf("square root of %f = %f\n", b, sqrt(b));

    return 0;
}