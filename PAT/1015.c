#include<stdio.h>
#include<string.h>

typedef struct student{
    char id[9];
    int de;
    int cai;
    int sum;
    int rank;
} stu;

void swap(int *a, int *b){
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

void sort(int *num, int N, stu *info){
    int i, j;

    for( i = 0; i < N - 1; i++){
        for( j = 0; j < N - 1 - i; j++){
            if(info[ num[j] ].sum < info[ num[j+1] ].sum){
                swap( &num[j], &num[j+1]);
            }
            else if(info[ num[j] ].sum == info[ num[j+1] ].sum){
                if(info[ num[j] ].de < info[ num[j+1] ].de){
                    swap( &num[j], &num[j+1]);
                }
                else if(info[ num[j] ].de == info[ num[j+1] ].de){
                    if( strcmp( info[ num[j] ].id, info[ num[j+1] ].id) > 0 )
                        swap( &num[j], &num[j+1]);
                }
            }
        }
    }
}

int main(){
    int N, L, H;
    scanf("%d", &N);
    scanf("%d", &L);
    scanf("%d", &H);

    stu info[100000];
    int index[100000];

    int i, j, count = 0;

    char t_id[9];
    int t_de, t_cai, t_sum, t_rank;
    for( i = 0, j = 0; i < N; i++){
        scanf("%s %d %d", t_id, &t_de, &t_cai);
        t_sum = t_de + t_cai;
        if( t_de < L || t_cai < L ){
            count++;
            continue;
        }
        else if( t_de >= H && t_cai >= H){
            t_rank = 1;
        }
        else if( t_de >= H){
            t_rank = 2;
        }
        else if( t_de >= t_cai){
            t_rank = 3;
        }
        else{
            t_rank = 4;
        }

        strcpy( info[j].id , t_id);
        info[j].de = t_de;
        info[j].cai = t_cai;
        info[j].sum = t_sum;
        info[j].rank = t_rank;

        index[j] = j;

        j++;
    }

    printf("%d\n", N - count);

    sort(index, j, info);

    count = j;
    int t;

    for( i = 1; i <= 4; i++){
        for(j = 0; j < count; j++){
            t = index[j];
            if(info[t].rank == i)
                printf("%s %d %d\n", info[t].id, info[t].de, info[t].cai);
        }
    }

    return 0;
}