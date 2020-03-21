// guess the output of program without running it :)

#include "stdio.h"


int main(int argc, char const *argv[])
{
    char a[] = "world";

    for(int i = 0 , j = 5 ; i<j; a[i++] = a[j--] );

    printf("%s\n", a);
    return 0;
}

//  ans  == nothing or say empty string
