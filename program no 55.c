#include<stdio.h>
void main()
{
int a,b,c;
printf("\n Enter the numbers\t\n");
scanf("%d %d",&a,&b);
c=a*b;
if(c%2==0)
{
    printf("\n %d is even",c);
}
else
{
    printf("\n %d is odd",c);
}}
