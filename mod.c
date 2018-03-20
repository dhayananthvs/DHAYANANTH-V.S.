#include <stdio.h>

int main(void) {
	int l, h,m,a;
	scanf("%d%d%d",&h,&m,&a);
    l=(h*m)%a;
    printf("The value is %d\n",l);
	return 0;
}
