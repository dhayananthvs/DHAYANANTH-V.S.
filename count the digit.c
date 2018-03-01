#include<stdio.h>
void main()
{
int count=1,i,n;
scanf("%d",&n);
i=n;
while(i<=10)
{
i=i/10;
count++;
}
printf("\n the number of digits in %d is %d",n,count);
}
