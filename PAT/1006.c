#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    int wei[3] = {0};
    
    int i;
    for(i = 2 ; i >= 0; i--){
        wei[i] = num % 10;
        num /= 10;
    }
    
    while(wei[0]--){
        printf("B");
    }
    
    while(wei[1]--){
        printf("S");
    }
    
    i = 1;
    while(wei[2]--){
        printf("%d", i++);
    }
    
    return 0;
}