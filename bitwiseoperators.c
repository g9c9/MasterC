#include <stdio.h>

#define SHORTBITS sizeof(short) * 8

// Converts a positive short into 
// it's binary representation
char* binString(unsigned short n)
{
    static char buffer[SHORTBITS + 1];
    for(int i = SHORTBITS - 1; i >= 0; i--)
    {
        buffer[i] = n & 0x0001 ? '1' : '0';
        n >>= 1;
    }

    // Add null character to buffer
    buffer[SHORTBITS] = '\0';

    return buffer;
}

int main()
{
    unsigned short a,b,c,d,e,f,g,h,i,j;

    a = 0x4FFF;
    b = 0x4000;

    printf("  a: %04X - %s\n", a, binString(a));
    printf("& b: %04X - %s\n", b, binString(b));
    c = a & b;
    printf("  c: %04X - %s\n", c, binString(c));
    printf("\n");

    d = 0xAAAA;
    e = 0x5555;

    printf("  d: %04X - %s\n", d, binString(d));
    printf("| e: %04X - %s\n", e, binString(e));
    f = d | e;
    printf("  f: %04X - %s\n", f, binString(f));
    printf("\n");

    g = 0xAAAA;
    h = 0x55FF;

    printf("                g: %04X - %s\n", g, binString(g));
    printf("^(exclusive or) h: %04X - %s\n", h, binString(h));
    i = g ^ h;
    printf("        g ^ h = i: %04X - %s\n", i, binString(i));
    printf("        i ^ h = g: %04X - %s\n", i ^ h, binString(i ^ h));
    printf("\n");

    j = ~g;
    printf(" g:  %04X - %s\n", g, binString(g));
    printf("~g:  %04X - %s\n", j, binString(j));
    return 0;
}