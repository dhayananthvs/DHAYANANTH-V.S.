
#include <stdio.h>

int main(void) {
	int i,d, fact=1;
	scanf("%d", &d);
	for(i=1;i<=d;i++)
	{
		fact=fact*i;
	}
	printf("%d", fact);
	return 0;
}
