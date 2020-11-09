#include<stdio.h>

int main(){
    char ch[80][81];
    int i = 0;
    do{
        scanf("%s", ch[i++]);
    }while( getchar() != '\n');
    
    while(i--){
        if( i == 0)
            printf("%s", ch[i]);
        else
            printf("%s ", ch[i]);
    }
    
    return 0;
}
