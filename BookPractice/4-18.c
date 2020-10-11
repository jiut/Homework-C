#include <stdio.h>
int main(void)
{
	int n;
	printf("显示多少个*：");scanf("%d",&n);
	while (n>=5){
		printf("*****\n");
		n-=5;
		}
	while (n>0){
		putchar('*');
		n--;
		}
	return 0;
}

