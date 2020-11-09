#include<stdio.h>

void sort(int *n){
    int i, j, t;
    for( i = 0; i < 3; i++){
        for( j = 0; j < 3 - i; j++){
            if(*( n + j) < *( n + j + 1) ){
                t = *( n + j);
                *( n + j) = *( n + j + 1);
                *( n + j + 1) = t;
            }
        }
    }
}

int main(){
    int n[4], N;
    int i;

    scanf("%d", &N);

    n[0] = N / 1000;
    n[1] = N % 1000 / 100;
    n[2] = N % 100 / 10;
    n[3] = N % 10;

    if( n[0] == n[1] && n[1] == n[2] && n[2] == n[3])
        printf("%d%d%d%d - %d%d%d%d = 0000\n", n[0], n[1], n[2], n[3], n[0], n[1], n[2], n[3]);
    else{
        int num3 = 0;
        while(num3 != 6174){
            sort(n);
            int num1 = 0, num2 = 0, j;
            num1 = n[0] * 1000 + n[1] *100 + n[2] * 10 + n[3];
            num2 = n[3] * 1000 + n[2] *100 + n[1] * 10 + n[0];

            num3 = num1 - num2;

            printf("%04d - %04d = %04d\n", num1, num2, num3);

            n[0] = num3 % 10;
            n[1] = num3 / 10 % 10;
            n[2] = num3 / 100 % 10;
            n[3] = num3 / 1000;
        }
    }

    return 0;
}