#include <stdio.h>
int main(void)
{
	int n;
	printf("正整数：");scanf("%d",&n);
if (n>=0){
	int s=n,m=1;
	while (s>0){
	if (m>0) printf("+");
	else if (m<0) printf("-");
	m=-m;s--;}
	}
	return 0;
}
