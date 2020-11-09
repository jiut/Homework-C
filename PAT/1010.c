#include <stdio.h>

int main(){
    int flag = 0;
    while(1){
        int x1, x2;
        scanf("%d", &x1);
        scanf("%d", &x2);
        
        if(x2 == 0 && flag == 0)
            printf("0 0");
        
        if( x2 == 0 )
            break;
        else{
            if(flag != 0)
                putchar(' ');
            
            printf("%d %d", x1 * x2, x2 - 1);
            
            if(getchar() == '\n')
                break;
            
            flag = 1;
        }
    }
    
    return 0;
}