#include <stdio.h>
int main(void)
{
	int n;
	printf("请输入一个整数：");scanf("%d",&n);
	if (n>=0)
		printf("绝对值是%d。",n);
	else
		printf("绝对值是%d。",-n);
	return 0;
}
