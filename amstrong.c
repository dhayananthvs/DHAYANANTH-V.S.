#include<stdio.h>
void main()
{
    int a,b,c,d,e;
    printf("enter the value of a");
    scanf("%d",&a);
    b=a%100;
    c=a/100;
    d=b/10;
    e=b%10;
    d=(c*c*c)+(d*d*d)+(e*e*e);
    if(d==a)printf("\n amstrong number");
    else
    printf(" not amstrong number");
}
