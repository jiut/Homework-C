#include<stdio.h>
#include<string.h>

int main(){
    int a, temp, sum = 0;
    char c;

    int i;
    for(i = 0; i < 2; i++){
        int da[10] = {0}, pa = 0;

        while( ( c = getchar() ) != ' ' ){
            a = c - '0';
            da[a]++;
        }

        scanf("%d", &temp);
        getchar();

        while( da[ temp ]--){
            pa = pa * 10 + temp;
        }

        sum += pa;
    }

    printf("%d", sum);

    return 0;
}
