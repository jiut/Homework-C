#include <stdio.h>
int main(void)
{
	int a,b,m;
	puts("请输入两个整数。");
        printf("整数a：");scanf("%d",&a);
	printf("整数b：");scanf("%d",&b);
	if (a-b<=10 || b-a<=10) puts("它们的差小于等于10。");
	else puts("它们的差大于等于11");
	return 0;
}
