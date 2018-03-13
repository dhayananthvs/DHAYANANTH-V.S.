#include<stdio.h>
#include<string.h>
void main()
{
char a[50000];
int i,count=0;
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]>='0' && a[i]<='9' || a[i]>='a' && a[i]<='z')
{
    continue;
}
else
{
++count;
}
}
printf("%d",count);
}
