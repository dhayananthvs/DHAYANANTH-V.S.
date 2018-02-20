#include<stdio.h>
void main()
{
    int a[1000],i,j,min,n;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    scanf("%d",&a[i]);
    {
    min=a[0];    
    for(i=0;i>=n;i++)
    {
        if(a[i]<min)
        min=a[i];
    }
    printf("\n %d is minimum",min);
}}
