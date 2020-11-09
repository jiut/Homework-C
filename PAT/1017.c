#include<stdio.h>
#include<string.h>

int main(){
    char A[1001] = {'\0'}, Q[1001] = {'\0'};
    int B;

    scanf("%s %d", A, &B);

    int i, j = 0, temp = 0;
    for( i = 0; i < strlen(A); i++){
        temp = A[i] - '0' + temp*10;
        Q[j++] = temp / B + '0';
        if( i == 0 && Q[0] == '0' )
            j = 0;
        if( temp / B ){
            temp %= B;
        }
    }

    printf("%s %d", Q, temp);

    return 0;
}