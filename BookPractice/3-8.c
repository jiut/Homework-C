#include <stdio.h>

int main(void)
{
	int n1,n2,m;

	puts("请输入两个整数：");
	printf("整数1：");   scanf("%d", &n1);
	printf("整数2：");   scanf("%d", &n2);
	if (n1>n2) m=n1-n2;
	else m=n2-n1;
	printf("它们的差是%d。\n",m);

	return 0;
}
