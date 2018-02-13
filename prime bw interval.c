#include<stdio.h>
void main()
{
int a,i,k,n,j=0;
printf("\n enter the value of a \t");
scanf("%d %d",&a,&n);
for(k=a;k<=n;k++)
{ 
for(i=1;i<=a;i++)
{
if(a%i==0)
j++;
{
    if(j==2)
{
printf("%d is prime",k);
else
printf("\n %d is not prime number",k);
}}}
}}
