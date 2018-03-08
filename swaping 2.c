#include<stdio.h>
void main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    printf("Before swaping= %d\t%d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\n After swaping= %d\t%d",a,b);
}
