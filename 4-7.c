#include <stdio.h>
int main(void)
{
	int a,b=2;
	printf("请输入一个整数：");scanf("%d",&a);
	if (!a%2) a-=1;
	while (b<=a){
		printf("%d ",b);b*=2;
		}
	return 0;
}
