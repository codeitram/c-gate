#include "stdio.h"

void copy(char *a , char *b){

    while((*a++ = *b++)!= EOF) ;

  }

int main(int argc, char const *argv[])
{
    char *s = "ram krishna singh";

    char a[100];

    copy(a, s);
    printf("%s\n", a);
    return 0;
}
