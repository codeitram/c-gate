#include "stdio.h"

int main(int argc, char const *argv[])
{
    // char *c  = "ram krishna singh";
    int count ;
    for( count =0 ; getchar()!= EOF; count++);
    printf("%d\n", count);
    return 0;
}
