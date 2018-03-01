#include<stdio.h>
void main()
{
int t1=0,t2=1,t3,i,n;
printf("\n ENTER THE TERMS");
scanf("%d",&n);
for(i=0;i<n;i++)
{
t3=t1+t2;
t1=t2;
t2=t3;
printf("\n %d",t1);
}
}
