#include <stdio.h>
int main(void)
{
	int n,m=0,s;
	printf("请输入一个正整数：");scanf("%d",&n);
	s=n;
	while (n>0){
		m++;
		n/=10;
		}
	printf("%d的位数是%d",s,m);
	return 0;
}
