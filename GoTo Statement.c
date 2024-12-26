#include<stdio.h>
int main()
{
    int i=1;

    sifat:
        printf("%d\t",i);
        i++;

     if(i<5)
        goto sifat;


     return 0;
}
