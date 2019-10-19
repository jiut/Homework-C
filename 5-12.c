#include <stdio.h>
int main(void)
{
	int tensu[2][4][3]={0};
	int i,j,k;
	int sum[4][3];
	for (i=0;i<2;i++){
		for (j=0;j<4;j++){
			for (k=0;k<3;k++){
				printf("第%d次考试，%d号考生，第%d门考试的成绩：",i+1,j+1,k+1);
				scanf("%d",&tensu[i][j][k]);
			}
		}
	}
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++)
			sum[i][j] = tensu[0][i][j] + tensu[1][i][j];
	}
	for (k=0;k<2;k++){
		printf("第%d次考试的分数\n",k+1);
		for (i = 0; i < 4; i++) {
			for (j = 0; j < 3; j++)
				printf("%4d", tensu[k][i][j]);
			putchar('\n');
		}
	}

	puts("总分");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++)
			printf("%4d", sum[i][j]);
		putchar('\n');
	}

	return 0;
}
