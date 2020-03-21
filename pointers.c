#include "stdio.h"

int main(int argc, char const *argv[])
{
    int a[] = {10,20,30,40,50,60};

    int *p[] = {a , a+1, a+2 , a+3, a+4,a+5};

    int **pp =p;

     // run each of printf indepentely of other and guess its output

   // a[3] = *(a+3) = *p[3] = **(p+3) = **(pp +3)   yes it is true

    pp++;

    // 1.
    // printf("%d %d %d\n",pp-p,*pp-a,**pp );    // 1,1,20

    *pp++;

    //2.
    // printf("%d %d %d\n",pp-p,*pp-a,**pp );     //2,2,30

    ++*pp;

    //3.
    // printf("%d %d %d\n",pp-p,*pp-a,**pp );   //2,3,40

    ++**pp;

    //4.
    printf("%d %d %d\n",pp-p,*pp-a,**pp );   //2,3,41
       return 0;
}
