#include <stdio.h>
int main(void)
{
	int a=1;
	printf("  |");
	while (a<=9){
		printf("  %d",a);
		a++;
	}
	putchar('\n');
	for (a=1;a<=31;a++)
		putchar('-');
	putchar('\n');

	int i,j;
	for (i=1;i<=9;i++){
		printf("%d |",i);
		for (j=1;j<=9;j++){
			printf("%3d",i*j);
		}
		putchar('\n');
	}
	return 0;
}
