// swap two given numbers

#include "stdio.h"

void swap(int *a ,int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main(int argc, char const *argv[])
{
    int a  , b  ;

    scanf("%d %d", &a, &b);

    swap(&a, &b);

    printf("%d %d\n",a,b );

    return 0;
}
