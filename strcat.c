#include "stdio.h"

void strrcat(char *a , char *b){
    int i =0 , j = 0;
    while(a[i++]!='\0');
    i--;
    while((a[i++] = b[j++])!= EOF);
}

int main(int argc, char const *argv[])
{
    char a[100] = "ram ";
    char *b = "krishna";

    strrcat(a,b);
    printf("%s\n", a);
    return 0;
}
