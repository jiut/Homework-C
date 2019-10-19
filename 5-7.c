#include <stdio.h>
#define NM 99
int main(void)
{
	int n,fen[NM];
	printf("数据个数：");scanf("%d",&n);
	int i;
	for (i=0;i<n;i++){
		printf("%d号：",i+1);scanf("%d",&fen[i]);
	}
	putchar('{');
	for (i=0;i<n;i++){
		printf("%d",fen[i]);
		if (i==n-1) break;
		printf("，");
	}
	putchar('}');
	return 0;
}
