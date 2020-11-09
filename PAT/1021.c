#include<stdio.h>

int main(){
    int n[10] = {0};
    char c;
    while( ( c = getchar() ) != '\n')
        n[ c - '0' ]++;
    
    int i;
    for( i = 0; i < 10; i++){
        if( n[i])
            printf("%d:%d\n", i, n[i]);
    }

    return 0;
}
