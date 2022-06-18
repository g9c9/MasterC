#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* chrstr(char *str, char c)
{
    static char* buffer = "Test";
    static int offset = 0;
    
    //Check if c is the same as character returned from before
    if(*(buffer+offset) != c)
        offset = 0;
    else
        offset++;

    int x = 0;
    while(1)
    {
        if(*(str+x) == '\0' && *(buffer+x) == '\0')
        {
            break;
        }
        else if(*(str+x) == '\0' || *(buffer+x) == '\0' || *(str+x) != *(buffer+x))
        {
            buffer = (char*)malloc((strlen(str) + 1) * sizeof(char));
            strcpy(buffer, str);
            offset = 0;
            break;
        }
        x++;
    }

    while(*(buffer + offset) != '\0')
    {
        if(*(buffer + offset) == c)
        {
            return buffer + offset;
        }
        offset++;
    }
    return NULL;
}

int main()
{
    char* fO = chrstr("Hello,World!", 'o');
    printf("Char %c at Address: %p\n", *fO, fO);
    char* sO = chrstr("Hello,World!", 'o');
    printf("Char %c at Address: %p\n", *sO, sO);
    char* fL = chrstr("Hello,World!", 'l');
    printf("Char %c at Address: %p\n", *fL, fL);
    char* fK = chrstr("Cake!", 'k');
    printf("Char %c at Address: %p\n", *fK, fK);
    if(chrstr("Cake!", 'o') == NULL)
    {
        printf("No o in Cake!\n");
    }
    char* fExcl = chrstr("Cake!", '!');
    printf("Char %c at Address: %p\n", *fExcl, fExcl);
    return 0;
}