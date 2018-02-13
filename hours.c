#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter the minutes\t");
scanf("%d",&a);
b=a/60;
c=a%60;
printf("\n %d hours %d minutes",b,c);
}
