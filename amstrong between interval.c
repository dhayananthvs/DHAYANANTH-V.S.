#include<stdio.h>
void main()
{
    int b,c,d,e,f,i,j,n;
    printf("enter the limits");
    scanf("%d %d",&n,&j);
    for(i=n;i<=j;i++)
    {
    b=i%100;
    c=i/100;
    d=b/10;
    e=b%10;
    f=c*c*c+d*d*d+e*e*e;
    if(f==i)
    {
    printf(" \n %d ",f);
}
        
    }
}
