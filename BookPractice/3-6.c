#include <stdio.h>
int main(void)
{
	int x,y,z,m;
	puts("请输入三个整数：");
	printf("整数1：");scanf("%d",&x);
        printf("整数2：");scanf("%d",&y);
        printf("整数3：");scanf("%d",&z);
	m=x;
	if (y<m) m=y;
	if (z<m) m=z;
	printf("最小值是%d。\n",m);
	return 0;
}
