#include <stdio.h>
int main(void)
{
	int x,y,z;
	puts("请输入三个整数：");
	printf("整数1：");scanf("%d",&x);
        printf("整数2：");scanf("%d",&y);
        printf("整数3：");scanf("%d",&z);
	printf("最小值是%d。\n",(x<y)? ((x<z)?x:z):( (y<z)?y:z ));
	return 0;
}
