#include <stdio.h>
int min_of(const int v[],int n)
{
	int m=v[0],i;
	for (i=1;i<n;i++){
		if (m>v[i]) m=v[i];
	}
	return m;
}
int main(void)
{
	int n;
	printf("n ");scanf("%d",&n);
	int v[n],i;
	for (i=0;i<n;i++){
		printf("v[%d] ",i);scanf("%d",&v[i]);
	}
	printf("%d",min_of(v,n));
	return 0;
}
