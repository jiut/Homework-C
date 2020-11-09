#include<stdio.h>

int main(){
    int N;
    float D, result = 0;
    scanf("%d %f", &N, &D);

    int i;
    float ku[1000], jia[1000];
    for( i = 0; i < N; i++){
        scanf("%f", &ku[i]);
    }
    for( i = 0; i < N; i++){
        scanf("%f", &jia[i]);
    }

    while( D > 0){
        int max = 0;
        for( i = 0; i < N; i++){
            if( jia[i] / ku[i] > jia[max] / ku[max] )
                max = i;
        }

        if( D > ku[max]){
            D -= ku[max];
            result += jia[max];
            jia[max] = 0;
        }
        else{
            result += D / ku[max] * jia[max];
            D = 0;
            break;
        }
    }

    printf("%.2f", result);

    return 0;
}
