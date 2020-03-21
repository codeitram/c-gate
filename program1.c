
// copy input to output

#include "stdio.h"

int main(int argc, char const *argv[])
{
    int c;
    while((c = getchar())!= EOF){
        putchar(c);
    }
    return 0;
}


// also try to do this ./a.out < input.txt > output.txt
