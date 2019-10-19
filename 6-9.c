#include <stdio.h>
void rev_intary(int v[],int n)
{
	int x;
	if (n%2) x=(n+1)/2-1;
	else x=n/2;
	int i;
	for (i=0;i<x;i++){
		int t=v[i];
		v[i]=v[n-1-i];
		v[n-1-i]=t;
	}
}
int main(void)
{
	int n;
	printf("n ");scanf("%d",&n);
	int v[n],i;
	for (i=0;i<n;i++){
		printf("v[%d] ",i);scanf("%d",&v[i]);
	}
	rev_intary(v,n);
	printf("v={");
	for (i=0;i<n;i++)
		printf("%d ",v[i]);
	printf("}\n");
	return 0;
}
