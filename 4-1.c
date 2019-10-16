#include <stdio.h>

int main(void)
{	int r;
	do{
	int no;

	printf("请输入一个整数：");
	scanf("%d", &no);

	if (no == 0)
		puts("该整数为0。");
	else if (no > 0)
		puts("该整数为正数。");
	else
		puts("该整数为负数。");
	puts("要重复一次吗？【Yes...0/No...9】：:");
	scanf("%d",&r);
	}while (r==0);
	return 0;
}
