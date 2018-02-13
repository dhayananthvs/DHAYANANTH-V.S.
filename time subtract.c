#include<stdio.h>
void main()
{
int a,b,c,d,e,f,g,h,i;
printf("Enter the hours and minutes\t\t");
scanf("%d%d",&a,&b);
printf("Enter the hours and minutes\t\t");
scanf("%d%d",&d,&e);
c=(a*60)+b;
f=(d*60)+e;
g=c-f;
h=(g/60);
i=g%60;
printf("\n %d hours %d minutes",h,i);
}
