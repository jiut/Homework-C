#include<stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    
    int i;
    long int A, B, C;
    for(i = 1; i <= T; i++){
        scanf("%ld %ld %ld", &A, &B, &C);
        printf("Case #%d: %s\n", i, A + B > C ? "true" : "false");
    }
    
    return 0;
}