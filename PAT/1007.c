#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int i, j, k;//算素数
    int su[9999] = {2,3};
    k = 2;
    for(i = 2; i <= N; i++){
        for(j = 2; j * j <= i; j++){
            if (i % j == 0){
                j = 0;
                break;
            }
        }
        if (j != 0)
        su[k++] = i;
    }

    int count = 0;
    for( i = 1; i < k; i++){
        if(su[i] - su[i-1] == 2)
            count++;
    }

    printf("%d", count);

    return 0;
}