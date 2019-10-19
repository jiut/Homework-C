#include <stdio.h>
void intary_rcpy(int v1[],const int v2[],int n)
{
	int x;
	if (n%2) x=(n+1)/2;
	else x=n/2;
	int i;
	for (i=0;i<x;i++){
		v1[i]=v2[n-1-i];
		v1[n-1-i]=v2[i];
	}
}
int main(void)
{
	int n;
	printf("n ");scanf("%d",&n);
	int v1[n],v2[n],i;
	for (i=0;i<n;i++){
		printf("v2[%d] ",i);scanf("%d",&v2[i]);
	}
	intary_rcpy(v1,v2,n);
	printf("v1={");
	for (i=0;i<n;i++)
		printf("%d ",v1[i]);
	printf("}\n");
	printf("v2={");
        for (i=0;i<n;i++)
                printf("%d ",v2[i]);
        printf("}\n");

	return 0;
}
