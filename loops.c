#include <stdio.h>

int main()
{
    // While loop
    int x = 1;
    while( x <= 10)
    {
        printf("%d\n", x);
        x++;
    }

    //For loop
    for(int i = 0; i < 10; i++)
        printf("%d\n", i + 1);

    // Do loop which will always execute once
    char ch;

    ch = 'A';

    // Z does not get printed
    do
    {
        putchar(ch);
        ch++;
    } while (ch != 'Z');
    
    putchar('\n');

    // Infinite loop
    // while(1)
    // {
    //     printf("This will print forever and ever");
    // }

    /* A break statement can be used in an infinite loop to 
       stop the infinite loop

    int a = 0;

    while(1)
    {
        puts("Here I go...!");
        a++;
        if(a > 0) break;
    }  
    */

    // For loop that outputs values 1 through 20
    for (int i = 0; i < 20; i++)
        printf("%d ", i+1);
    printf("\n");

    //While loop that outputs even values from -10 through 10
    int e = -10;

    while (e <= 10)
    {
        printf("%d ", e);
        e += 2;
    }
    printf("\n");

    return 0;
}