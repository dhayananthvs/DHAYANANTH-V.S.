#include<stdio.h>
void main()
{
int i,n,c=1;
scanf("%d",&n);
for(i=1;i<=n;i++)
c=c*i;
printf("\n the factorial of %d is %d",n,c);
}
