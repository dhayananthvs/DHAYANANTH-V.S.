#include<stdio.h>
void main()
{
char a;
printf("\n enter the letter");
scanf("%c",&a);
if((a>='a' && a<='z') || (a>='A' && a<='Z'))
printf("%c is alphabet");
else
printf("%c is not an alphabet");
}
