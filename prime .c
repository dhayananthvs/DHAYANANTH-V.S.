#include<stdio.h>
void main()
{
int a,i,j=0;
printf("\n enter the value of a \t");
scanf("%d",&a);
for(i=1;i<=a;i++)
if(a%i==0)
j++;
{
    if(j==2)
printf("%d is prime",a);
else
printf("%d is not prime number",a);
}}
