#include<stdio.h>

int win(char c1, char c2){
    if( c1 == 'B'){
        if( c2 == 'B')
            return 0;
        if( c2 == 'C')
            return 1;
        if( c2 == 'J')
            return -1;
    }
    if( c1 == 'C'){
        if( c2 == 'B')
            return -1;
        if( c2 == 'C')
            return 0;
        if( c2 == 'J')
            return 1;
    }
    if( c1 == 'J'){
        if( c2 == 'B')
            return 1;
        if( c2 == 'C')
            return -1;
        if( c2 == 'J')
            return 0;
    }
}

int id( char c){
    if( c == 'B') return 0;
    if( c == 'C') return 1;
    if( c == 'J') return 2;
}

char idx( int n){
    if( n == 0) return 'B';
    if( n == 1) return 'C';
    if( n == 2) return 'J';
}

int main(){
    int N;
    scanf("%d", &N);

    int i, j, result, j_win = 0, j_eq = 0;
    int count[2][3] = { {0}, {0} };
    char game[3];
    for( i = 0; i < N; i++){
        while( getchar() != '\n' );//&& getchar() != ' ');
        game[0] = getchar();
        getchar();
        game[1] = getchar();
        result = win( game[0], game[1]);
        if( result == 1){
            j_win++;
            count[0][ id( game[0] ) ]++;
        }
        if( result == 0)
            j_eq++;
        if( result == -1)
            count[1][ id( game[1] ) ]++;
    }

    printf("%d %d %d\n%d %d %d\n", j_win, j_eq, N - j_win - j_eq, N - j_win - j_eq, j_eq, j_win);

    for( i = 0; i < 2; i++){
        result = 0;
        for( j  = 1; j < 3; j++){
            if( count[i][j] > count[i][result] )
                result = j;
        }
        if(i == 0)
            printf("%c ", idx(result));
        if(i == 1)
            printf("%c", idx(result));
    }

    return 0;
}
