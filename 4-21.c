#include <stdio.h>
int main(void)
{
	int n,i=1,j=1;
	printf("生成一个正方形\n正方形有几层：");scanf("%d",&n);
	while (i<=n){
		j=1;
		while (j<=n){
			putchar('*');
			j++;
		}
		putchar('\n');
		i++;
	}
	return 0;
}
