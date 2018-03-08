#include<stdio.h>
void main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    printf("Before swaping= %d\t%d",a,b);
    a=a^b;
    b=a^b;
    a=b^a;
    printf("\n After swaping= %d\t%d",a,b);
}
