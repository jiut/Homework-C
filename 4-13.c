#include <stdio.h>
int main(void)
{
	int n,i,s=0;
	printf("n的值：");scanf("%d",&n);
	for (i=1;i<=n;i++)
		s+=i;
	printf("1到%d的和为%d。",n,s);
	return 0;
}
