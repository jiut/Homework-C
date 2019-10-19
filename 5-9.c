#include <stdio.h>

#define NUMBER	99

int main(void)
{
	int i, j=1;
	int num;
	int tensu[NUMBER];
	int bunpu[11] = {0};
	printf("请输入学生人数：");

	do {
		scanf("%d", &num);
		if (num < 1 || num > NUMBER)
			printf("\a 请输入1~%d 的数：", NUMBER);
	} while (num < 1 || num > NUMBER);

	printf("请输入%d 人的分数。\n", num);

	for (i = 0; i < num; i++) {
		printf("%2d号：", i + 1);
		do {
			scanf("%d", &tensu[i]);
			if (tensu[i] < 0 || tensu[i] > 100)
				printf("\a请输入1~100 的数：");
		} while (tensu[i] < 0 || tensu[i] > 100);
		bunpu[tensu[i] / 10]++;
	}
	int max,m,n;
	for (max=bunpu[0];j<11;j++)
		if (max<bunpu[j]) max=bunpu[j];
	for (m=max;m>=1;m--){
		for (n=0;n<=10;n++){
			if (bunpu[n]-m+1<=0) printf("    ");
			else printf("*   ");
		}
		putchar('\n');
	}
	printf("_________________________________________\n0  10  20  30  40  50  60  70  80  90  100\n");

	return 0;
}
