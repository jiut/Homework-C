#include <stdio.h>
int main(void)
{
	int n,i=1;
	printf("整数值：");scanf("%d",&n);
	while (i<=n){
		printf("%d的二次方是%d\n",i,i*i);
		i++;
		}
	return 0;
}
