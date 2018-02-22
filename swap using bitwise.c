#include<stdio.h>
void main()
{
    int a,b;
    printf("\n enter the values \n");
    scanf("%d %d",&a,&b);
    a=a^b;
    b=b^a;
    a=b^a;
    printf("\n a=%d b=%d",a,b);
}
