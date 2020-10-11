#include <stdio.h>
int main(void)
{
	int n,i;
	printf("请输入一个整数：");scanf("%d",&n);
	for (i=1;i<=n;i++)
	printf("%d",i%10);
	return 0;
}
