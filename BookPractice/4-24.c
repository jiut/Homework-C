#include <stdio.h>
int main(void)
{
	int n,i,j;
	printf("让我们来画一个金字塔。\n金字塔有几层：");scanf("%d",&n);
	for (i=1;i<=n;i++){
		for (j=1;j<=n-i;j++)
			putchar(' ');
		for (j=1;j<=(i-1)*2+1;j++)
			putchar('*');
		putchar('\n');
	}
	return 0;
}
