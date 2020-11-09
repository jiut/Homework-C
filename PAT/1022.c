#include<stdio.h>

int main(){
    int A, B, bit;
    long N;
    scanf("%d %d %d", &A, &B, &bit);
    N = A + B;

    if(N == 0)//等于0的特殊情况
        putchar('0');
    char s[99];

    int i = 0;
    while( N ){
        s[i++] = N % bit + '0';
        N /= bit;
    }

    while(i--)
        printf("%c", s[i]);

    return 0;
}
