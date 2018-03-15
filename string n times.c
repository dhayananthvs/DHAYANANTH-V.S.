#include<stdio.h>
#include<string.h>
void main()
{
char a[5000];
int b,i;
scanf("%[^\n]s",a);
scanf("%d",&b);
for(i=0;i<b;i++)
{
printf("\n%s",a);
}
}
