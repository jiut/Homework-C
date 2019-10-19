#include <stdio.h>
int cube(int x)
{
	return x*x*x;
}
int main(void)
{
	int x;
	printf("x");scanf("%d",&x);
	printf("%d",cube(x));
	return 0;
}
