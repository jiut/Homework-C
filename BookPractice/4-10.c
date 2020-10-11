#include <stdio.h>
int main(void)
{
	int n;
	printf("正整数：");scanf("%d",&n);
if (n>=0){
	while (n>0){
	printf("*\n");
	n--;
	}
}
	return 0;
}
