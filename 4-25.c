#include <stdio.h>
int main(void)
{
	int n,i,j;
	printf("让我们来画一个向下的金字塔。\n金字塔有几层：");scanf("%d",&n);
	for (i=1;i<=n;i++){
		for (j=1;j<=i;j++)
			putchar(' ');
		for (j=1;j<=(n-i)*2+1;j++)
			printf("%d",i%10);
		putchar('\n');
	}
	return 0;
}
