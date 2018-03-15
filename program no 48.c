#include<stdio.h>
void main()
{
int a[5000],i,n,avg=0;
printf("\n Enter the number\t");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{
avg=avg+a[i];
}
avg=avg/n;
printf("\n Average is %d",avg);
}
