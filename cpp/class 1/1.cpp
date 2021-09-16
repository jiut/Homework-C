#include <iostream>
using namespace std;

int main() {
    int moment[3], period[3];

    cout << "输入初始时刻某时某分某秒" << endl;
    for (int i = 0; i < 3; i++) {
        cin >> moment[i];
    }

    cout << "输入时间段几小时几分几秒" << endl;
    for (int i = 0; i < 3; i++){
        cin >> period[i];
    }

    bool exit = false;
    for (int i = 0; i < 3; i++) {
        if(i == 0){
            if(moment[i] < 0 || moment[i] >= 24 )
                exit = true;
        }
        else {
            if( (period[i] < 0 || period[i] > 60 ) 
            || (moment[i] < 0 || moment[i] > 60 ) )
            exit = true;
        }
        if (exit){
            cout << "非法输入" << endl;
            system("pause");
            return 0;
        }
    }


    cout << "该时间段为"<< period[0] + period[1] / 60.0 + period[2] / 3600.0 << "小时" << endl;
    
    int flag = 0;
    for (int i = 2; i >= 0; i--) {
        moment[i] += period[i] + flag;
        flag = moment[i] / 60;
        if(i != 0){
            moment[i] %= 60;
        }
        else {
            moment[i] %= 24;
        }
    }

    cout << "初始时刻经过该时间段后为" << moment[0] << "时" << moment[1] << "分" << moment[2] << "秒" << endl;

    system("pause");
    return 0;
}