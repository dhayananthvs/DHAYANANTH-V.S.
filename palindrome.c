#include<stdio.h>
void main()
{
    int a,b,c,d,e,f;
    printf("enter the value of a");
    scanf("%d",&a);
    b=a%100;
    c=(a%100)-((b/10)*10);
    d=(b/10);
    e=a/100;
    f=(c*100)+(d*10)+e;
    if(f==a)
    printf("\n the given number is palindrome ");
    else
    printf(" \n the given number is not palindrome");
}
