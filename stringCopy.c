#include <stdio.h>

void copy(char *a , char *b)
{
    // int i = 0;
    while((*b++ = *a++));
}

int main(int argc, char const *argv[])
{
    char *s = "ram krishna singh";

    char t[100];

    copy(s,t);  // here i am copying s into t

    printf("%s\n", t);
    return 0;
}
