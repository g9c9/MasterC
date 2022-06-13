#include <stdio.h>

int main()
{
    char a;
    short b;
    int c;
    unsigned int d;
    long e;
    float f;
    double g;

    struct stuff {
        int a;
        float b;
        char c[32];
    };

    printf("A char variable occupies %lu bytes of storage\n", sizeof(a));
    printf("A short variable occupies %lu bytes of storage\n", sizeof(b));
    printf("A int variable occupies %lu bytes of storage\n", sizeof(c));
    printf("A unsigned int variable occupies %lu bytes of storage\n", sizeof(d));
    printf("A long variable occupies %lu bytes of storage\n", sizeof(e));
    printf("A float variable occupies %lu bytes of storage\n", sizeof(f));
    printf("A double variable occupies %lu bytes of storage\n", sizeof(g));
    putchar('\n');
    
    printf("The structure 'stuff' occupies %lu bytes of storage\n", sizeof(struct stuff));
    putchar('\n');
    
    puts("Memory locations:");
    printf("a is at %p\n", &a);
    printf("b is at %p\n", &b);
    printf("c is at %p\n", &c);

    return 0;
}