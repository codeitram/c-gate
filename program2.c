#include "stdio.h"

int main(int argc, char const *argv[])
{
    char a[100];
    int i =0 ;
    char c;
    while( (c=getchar()) != EOF)
        a[i++] = c;


    printf("\n");
    printf("%d\n", i);
    return 0;
}


// this program is going to count the no of char in a string
//  use control + d to give EOF from terminal
