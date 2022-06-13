#include <stdio.h>

int main()
{
    int a, b;
    int *ptr;

    ptr = &a;
    *ptr = 1234;
    ptr = &b;
    *ptr = 4567;

    printf("A is %d and B is %d\n",a,b);

    /* Here is an example that throws an error:

    float price, *ptr;

    *ptr = 99.98;

    printf("The price is $%.2f\n",price);
    */
    
    // Here's the fix:
    float price, *ptr2;

    /* Always initialize pointers! Errors are 
    thrown if you try to modify unitialized pointer
    since you could modify memory owned by someone else */
    ptr2 = &price;
    *ptr2 = 99.98;

    printf("The price is $%.2f\n",price);


    return 0;
}