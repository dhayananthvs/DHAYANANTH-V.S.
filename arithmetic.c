#include<stdio.h>
void main()
{
    int a,k,n,c,d,e;
    printf("\n Enter the value of a,n,k);
    scanf("%d %d %d",&a,&n,&d);
    c=a+(n-1)*d;
    e=(n*(a+c)/2);
    printf("\n %d",e);
}
