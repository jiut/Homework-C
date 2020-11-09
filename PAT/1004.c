#include<stdio.h>
#include<string.h>

int main(){
    int num;
    scanf("%d", &num);
    
    struct student{
        char name[11];
        char id[11];
        int score;
    } stud[2];
    
    char t_name[11], t_id[11];
    int i, temp[2] = {-1,101}, t_score;
    for(i = 0; i < num; i++){
        scanf("%s %s %d", t_name, t_id, &t_score);//字符串不需要&
        if(t_score > temp[0]){
            temp[0] = t_score;
            strcpy( stud[0].name, t_name);
            strcpy( stud[0].id, t_id);
        }
        if(t_score < temp[1]){
            temp[1] = t_score;
            strcpy( stud[1].name, t_name);
            strcpy( stud[1].id, t_id);
        }
    }
    
    printf("%s %s\n%s %s\n", stud[0].name, stud[0].id, stud[1].name, stud[1].id);
    
    return 0;
}