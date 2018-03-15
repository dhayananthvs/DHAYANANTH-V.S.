#include<stdio.h>
void main()
{
int a[5000],i,n,max,min;
printf("\n Enter the number\t");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
min=a[n];
for(i=1;i<=n;i++)
{
if(a[i]<min)
{
min=a[i];
}}
printf("\n The minimum vamue is %d",min);
max=a[n];
for(i=1;i<=n;i++)
{
if(a[i]>max)
{
max=a[i];
}}
printf("\n The maximum value is %d",max);
}
