#include <stdio.h>
int main(void)
{
	int a,b,c,d,m;
	puts("请输入四个整数：");
        printf("整数1：");scanf("%d",&a);
        printf("整数2：");scanf("%d",&b);
        printf("整数3：");scanf("%d",&c);
        printf("整数4：");scanf("%d",&d);
	m=a;
	if (m<b) m=b;
	if (m<c) m=c;
	if (m<d) m=d;
	printf("最大值是：%d。\n",m);
	return 0;
}
