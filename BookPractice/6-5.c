#include <stdio.h>
int sumup(int n)
{
	return n*(n+1)/2;
}
int main(void)
{
	int n;
	printf("n ");scanf("%d",&n);
	printf("%d",sumup(n));
	return 0;
}
