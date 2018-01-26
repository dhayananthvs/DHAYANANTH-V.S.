#include<stdio.h>
void main() 
{
int i,a,b,c;
printf("enter the limits");
scanf("%d %d",&a,&b);
printf("the values are");
for(i=a;i<b;i++)
if(i%2==1)
printf(" \t %d",i);
}
