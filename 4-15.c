#include <stdio.h>
int main(void)
{
	int a,b,m;
	printf("开始数值（cm）：");scanf("%d",&a);
        printf("结束数值（cm）：");scanf("%d",&b);
        printf("间隔数值（cm）：");scanf("%d",&m);
	for ( ;a<=b;a+=m)
		printf("%dcm	%.2fkg\n",a,(a-100)*0.9);
	return 0;
}
