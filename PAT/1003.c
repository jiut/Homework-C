#include<stdio.h>

int main(){
    int n, i, j;
    scanf("%d", &n);
    getchar();//任何在scanf后的getchar读取都要消回车

    char pat;

    for(i = 0; i < n; i++){
        int pos = 0;
        int count[3] = {0};
        for(j = 0; ( pat = getchar() ) != '\n' ; j++){
            if( pat == 'A' ){
                count[ pos ]++;
            }
            else if( pat == 'P' && pos == 0){
                pos = 1;
            }
            else if( pat == 'T' && pos == 1){
                pos = 2;
            }
            else
                break;
        }
        
        if( count[0]*count[1] == count[2] && pos == 2 && count[1]){
            printf("YES\n");
        }
        else
            printf("NO\n");
        

        if(pat != '\n'){
            while( getchar() != '\n' );
        }
        
    }

    return 0;
}