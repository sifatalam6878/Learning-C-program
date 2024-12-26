// c = (F-32)/1.8
#include<stdio.h>
int main()
{
    float c,F;

    printf("Enter Fran : ");
    scanf("%f",&F);

    c = (F-32)/1.8;
    printf("centigrade : %.2f\n",c);

}
