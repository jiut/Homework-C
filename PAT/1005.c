#include<stdio.h>

int main(){
    int num;
    scanf("%d", &num);

    int arry[99] = {0};
    int flag[99] = {0};
    int i;
    for( i = 0; i < num; i++){
        scanf("%d", &arry[i]);
        flag[i] = 1;
    }

    int j, k;
    for(i = 0; i < num; i++){//判断条件不应该在中途就不符合
        if( arry[i] ){//flag[i] == 1 ){
            for(j = arry[i]; j != 1 && j != 0; ){
                if( j % 2 == 0)
                    j /= 2;
                else
                    j = (3*j + 1) / 2;

                for(k = 0; k < num; k++){
                    if( j == arry[k] ){
                        arry[k] = 0;
                        //flag[k] = 0;
                        break;
                    }
                }
            }
        }
    }

    /*int temp[99];
    for(i = 0, j = 0, k = 0; i < num; i++){
        if(flag[i] == 1){
            temp[k++] = arry[i];
        }
    }*/

    //sort(temp, k);
    sort(arry, k);

    for(i = 0; i < 2; i++){
        if( i == 0 ){
            printf("%d", arry[i]);
        }
        else
            printf(" %d", arry[i]);
    }

    return 0;
}

void sort(int *num, int k){
    int i, j, t;

    for( i = 0 ; i < k - 1; i++)
        for( j = 0; j < k - 1 - i; j++){
            if(num[j] < num[j+1]){
                t = num[j];
                num[j] = num[j+1];
                num[j+1] = t;
            }
        }
}