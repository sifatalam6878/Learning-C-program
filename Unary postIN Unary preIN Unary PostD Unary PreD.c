#include<stdio.h>
int main()
{
    int x=10;

    printf("%d\n",x++);//x=10
    printf("%d\n",x);//x=11
    printf("%d\n",++x);//x=12
    printf("%d\n",x);//x=12
    printf("%d\n",x--);//x=12
    printf("%d\n",--x);//x=10

    return 0;

}
