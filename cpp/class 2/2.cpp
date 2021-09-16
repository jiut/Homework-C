#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "输入：";
    cin >> num;

    int chu[] = {3, 5, 7};
    int flag[4] = {0};

    for (int i; i < 3; i++){
        if( num % chu[i] == 0){
            flag[i] = 1;
            flag[3]++;
        }
    }

    if(flag[3] == 0){
            cout << "不能被3，5，7中的任何一个整除" << endl;
    }
    else{
        cout << "能被 ";
        for (int i = 0; i < 3; i++){
            if(flag[i]){
                cout << chu[i] << " ";
            }
        }
        cout << "整除" << endl;
    }

    system("pause");
    return 0;
}