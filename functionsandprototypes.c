#include <stdio.h>

// Prototype to tell the compiler about the
// function type and it's arguments
// Prototype is a statement
void blorf(void);

// main is very well known by compiler, so no
// need of prototype
int main()
{
    puts("The main() function always runs first");
    blorf();
    puts("Thanks, blorf()");

    return 0;
}

//This could just easily replace the prototype
void blorf(void)
{
    puts("The blorf() function runs when it's called");
}