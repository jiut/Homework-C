#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    
    int i, t1, t2, ind[5] = {0};
    int num[5][1000];
    for( i = 0; i < N; i++){
        scanf("%d", &t1);
        t2 = t1 % 5;
        num[t2][ ind[t2]++ ] = t1;
    }
    
    int sum = 0;
    if(ind[0] != 0){
        for(i = 0; i < ind[0]; i++){//printf("%d ", num[0][i]);} }
            if(num[0][i] % 2 == 0)
                sum += num[0][i];
        }
        if(sum != 0)
            printf("%d ", sum);
        else
            printf("N ");
    }
    else
        printf("N ");
    
    if(ind[1] != 0){
        sum = 0;
        t1 = 1;//初始化要在循环外进行
        for( i = 0; i < ind[1]; i++){//printf("%d ", num[1][i]);} }
            sum += t1 * num[1][i];
            t1 *= -1;
        }
        printf("%d ", sum);
    }
    else
        printf("N ");
    
    if(ind[2] != 0){
        printf("%d ", ind[2]);
    }
    else
        printf("N ");
    
    if(ind[3] != 0){
        sum = 0;
        for( i = 0; i < ind[3]; i++){//printf("%d ", num[3][i]);} }
            sum += num[3][i];
        }
        printf("%.1f ", (float)sum / (ind[3]) );
    }
    else
        printf("N ");
    
    if(ind[4] != 0){
        t1 = 0;
        for( i = 0; i < ind[4]; i++){
            if( num[4][i] > t1)
                t1 = num[4][i];
        }
        printf("%d", t1);
    }
    else
        printf("N");
    
    return 0;
}