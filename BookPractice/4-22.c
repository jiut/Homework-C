#include <stdio.h>
int main(void)
{
	int a,b,x,y,i,j;
	printf("让我们来画一个长方形。\n一边：");scanf("%d",&a);
	printf("另一边：");scanf("%d",&b);
	if (a>=b){
		x=a;
		y=b;
	}
	else{
		x=b;
		y=a;
	}

	for (i=1;i<=y;i++){
		for (j=1;j<=x;j++)
			putchar('*');
		putchar('\n');
	}
	return 0;
}
