#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int height;
    float weight;

    cout << "输入身高，单位厘米" << endl;
    cin >> height;

    cout << "输入体重，单位千克" << endl;
    cin >> weight;

    if (weight <= 0 || height <= 0){
        cout << "错误";
        system("pause");
        return 0;
    }

    cout << "身高" << (int)(height / 30.48) << "尺" << (int)( ( height - ( (int)(height / 30.48) * 30.48 ) ) / 2.54) << "寸" << endl; //<< fixed << setprecision(0)<< (height - (int)(height / 30.48) * 30.48 ) / 2.54 << endl 需要四舍五入就这么写;
    
    cout << "体重" << (int)(weight / 0.4536) << "磅" << endl;

    float BMI = weight / (height * height / 10000.0) ;

    cout << "体重指数" << fixed << setprecision(2)<< BMI << " ";

    if(BMI < 20){
        cout << "偏瘦" << endl;
    }
    else if(BMI <= 25){
        cout << "适中" << endl;
    }
    else if(BMI <= 30){
        cout << "偏胖" << endl;
    }
    else if(BMI <= 35){
        cout << "肥胖" << endl;
    }
    else{
        cout << "重度肥胖" << endl;
    }

    system("pause");
    return 0;
}