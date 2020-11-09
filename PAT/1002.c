#include<stdio.h>
#define N 100

int main(){
    char ch;
    char *pinyin[] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    int temp[N] = {0};
    int i, sum = 0 ;
    
    for( i = 0 ; (ch = getchar() ) != '\n' ; i++){
        sum += ch - '0' ;
    }
    
    for( i = 0; sum != 0; i++){
        temp[i] = sum % 10;
        sum /= 10;
    }
    
    for(i-- ; i >= 0; i--){
        printf("%s", pinyin[temp[i]]);
            
        if(i != 0){
            putchar(' ');
        }
    }
    
    return 0;
}