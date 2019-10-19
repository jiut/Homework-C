#include <stdio.h>
void alert(int n)
{
	while (n-->0)
		putchar('\a');
}
int main(void)
{
	int n;
	printf("n ");scanf("%d",&n);
	alert(n);
	return 0;
}
