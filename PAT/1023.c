#include<stdio.h>

int main(){
    int i, n[10];
    for( i = 0; i < 10; i++)
        scanf("%d", &n[i]);

    for( i = 1; i < 10; i++){
        if(n[i]){
            printf("%d", i);
            n[i]--;
            break;
        }
    }

    for( i = 0; i < 10; i++){
        if(n[i]){
            while(n[i]--)
                printf("%d", i);
        }
    }

    return 0;
}
