#include<stdio.h>
#include<string.h>

int main(){
    char str[2][61];//字符串长度要加一
    char *weekday[] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};

    int i, j, k = 0, count, flag = 0;
    char c;
    for(i = 0; i < 2; i++){
        scanf("%s", str[0]);
        scanf("%s", str[1]);

        count = 0;
        for( c = str[0][count]; c != '\n'; c = str[0][++count]){
            if( ( k == 0 && ( c <= 'G' && c >= 'A') ) ||
                ( k == 1 && ( ( c <= 'N' && c >= 'A') || ( c <= '9' && c >= '0') ) ) ||
                ( k == 2 && ( ( c >= 'a' && c <= 'z') || ( c >= 'A' && c <= 'Z') ) )
               ){
                for(j = flag; j < strlen(str[1]) ; j++){
                    if(str[1][j] == c && j == count){
                        if( k == 0){
                            printf("%s ", weekday[c - 'A']);
                            flag = j;
                        }
                        if( k == 1 ){
                            if( c <= 'N' && c >= 'A' )
                                printf("%02d", (int)( c - 'A' + 10 ) );
                            if( c <= '9' && c >= '0')
                                printf("%02d", (int)( c - '0'));
                            flag = 0;
                        }
                        if( k == 2 ){
                            printf(":%02d", j);
                        }
                        k++;
                        break;
                    }
                }

                if( ( k == 2 && i == 0 ) || k == 3 )
                    break;
            }
        }

    }

    return 0;
}
