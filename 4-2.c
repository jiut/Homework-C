#include <stdio.h>
int main(void)
{
	int a,b,s,n=0;
	puts("请输入两个整数。");
	printf("整数a：");scanf("%d",&a);
        printf("整数b：");scanf("%d",&b);
	s=b;
	do{
		n+=b;
		b++;
	}while (b<a);
	printf("大于等于%d小于等于%d的所有整数的和是%d",s,a,n);
	return 0;
}
