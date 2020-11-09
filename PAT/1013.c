#include<stdio.h>

int main(){
    int M, N;
    scanf("%d %d", &M, &N);

    int i, j, count = 2, flag;
    int su[10000] = {2, 3};

    if( M <= 2 ){
        for(i = M - 1; i < 2; i++){
            if( i != N - 1 )
                printf("%d ", su[i]);
            else{
                printf("%d", su[i]);
                break;
            }
        }
    }

    for(i = 5; i <= 104759; i++){
        for(j = 2; j * j <= i; j++){
            if(i % j == 0){
                j = 0;
                break;
            }
        }
        if( j != 0){
            su[count] = i;
            if(count + 1 == N){
                printf("%d", su[count]);
                break;
            }

            if(count + 1 >= M && count + 1 < N){
                if( ( count + 2 - M ) % 10 )
                    printf("%d ", su[count]);
                else
                    printf("%d\n", su[count]);
            }

            count++;
        }
    }

    return 0;

}
