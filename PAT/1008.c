#include<stdio.h>

int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    M %= N;
    
    int arry[999] = {0};
    int i;
    for(i = 0; i < N; i++)
        scanf("%d", &arry[i]);
    
    for(i = N - M; i < N; i++){
        printf("%d ", arry[i]);
    }
    
    for(i = 0; i < N - M; i++){
        if( i == N - M - 1)
            printf("%d", arry[i]);
        else
            printf("%d ", arry[i]);
    }
    
    return 0;
}