#include <stdio.h>
int main(void)
{
	int n,i=1;
	printf("整数值：");scanf("%d",&n);
	for (;i<=n;i+=2)
	printf("%d ",i);
	return 0;
}
