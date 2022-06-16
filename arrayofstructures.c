#include <stdio.h>

struct date {
        int month;
        int day;
        int year;
};

struct person {
        char name[32];
        struct date tookoffice;
};

void printPresidents(struct person*);

int main()
{  
    struct person presidents[4] = {
        {"George Washington", {4, 30, 1789}},
        {"Thomas Jefferson", {3, 4, 1801}},
        {"Abraham Lincoln", {3, 4, 1861}},
        {"Theodore Roosevelt", {9, 14, 1901}}
    };

    printPresidents(presidents);

    struct person temp = presidents[1];
    presidents[1] = presidents[2];
    presidents[2] = temp;
    printf("Swapping...done!");

    printPresidents(presidents);
    
}

// Could also have as parameter "struct person p[]"
void printPresidents(struct person* presidents)
{
    printf("Presidents:\n");
    for(int i = 0; i < 4; i++)
    {
        printf("President %s took office on %d/%d/%d\n", 
                presidents[i].name, 
                presidents[i].tookoffice.month,
                presidents[i].tookoffice.day,
                presidents[i].tookoffice.year);
    }
}