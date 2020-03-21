#include "stdio.h"
#include "string.h"

void reverse(char *s){
    for(int i =0 , j = strlen(s)-1 ; i <j ; i++,  j--){
        char c ;
        c = s[i];
        s[i] = s[j];
        s[j] = c;

    }
}

int main(int argc, char const *argv[])
{
    char s[] = "this will be reversed dont you worry";

    reverse(s);
    printf("%s\n", s);
    return 0;
}
