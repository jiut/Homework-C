#include <stdio.h>
int main(void)
{
	double x;
	printf("请输入您的身高：");scanf("%lf",&x);
	printf("您的标准体重是：%.1f公斤。",(x-100)*0.9);
	return 0;
}
