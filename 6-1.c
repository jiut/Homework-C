#include <stdio.h>
int min2(int a,int b)
{
	return (a<b)?a:b;
}

int main(void)
{
	int a,b;
	printf("a");scanf("%d",&a);
	printf("b");scanf("%d",&b);
	printf("%d",min2(a,b));
	return 0;
}
