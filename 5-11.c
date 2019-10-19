#include <stdio.h>
int main(void)
{
	int f[6][2],i,j;
	puts("输入语文与数学的分数：");
	for (i=0;i<6;i++){
		for (j=0;j<2;j++){
			if (j==1) printf("学生%d语文：",i+1);
			else printf("学生%d数学：",i+1);
			scanf("%d",&f[i][j]);
		}
	}

	int s1=0,s2=0;
	for (i=0;i<2;i++){
		for (j=0;j<6;j++){
			if (i==1) s1+=f[j][0];
			else s2+=f[j][1];
		}
	}
	printf("语文总分为：%d，平均分为：%d。\n",s1,s1/6);
	printf("数学总分为：%d，平均分为：%d。\n",s2,s2/6);

	for (i=0;i<6;i++){
		int s=f[i][1]+f[i][0];
		printf("学生%d的总分为：%d，平均分为：%d。\n",i+1,s,s/2);
	}
	return 0;
}
