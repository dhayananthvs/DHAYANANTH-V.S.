#include<stdio.h>
void main()
{
int a[1000],i,max,n;
scanf("%d",&n);
for(i=1;i<=3;i++)
{
scanf("%d",&a[i]);
}
max=a[n];
for(i=1;i<=n;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("\n the max value is %d",max);

}
