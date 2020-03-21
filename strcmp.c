// not working for now try it later on. making a seprate commit for it for easy finding

#include "stdio.h"

int strrcmp(char *a, char *b){

    for(; *a++ == *b++; )
    {
        if(*a == '\0')
            return 0;
    }
    return *a - *b;
}


int main(int argc, char const *argv[])
{
    char a[100] = "ram krishna";

    char b[100] = "ram krishna singh";

    printf("%d",strrcmp(a, b));
    return 0;
}
