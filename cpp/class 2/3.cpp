#include <iostream>
using namespace std;

int main() {
    int mode, money;
    cout << "1.单身\n2.已婚\n3.离异或丧偶" << endl;
    cin >> mode;

    int tax_limit;
    switch(mode){
        case 1: {
            tax_limit = 17850;
            break;
        }
        case 2: {
            tax_limit = 29750;
            break;
        }
        case 3: {
            tax_limit = 14875;
            break;
        }
        default: {
            system("pause");
            return 0;
        }
    }

    cout << "年收入";
    cin >> money;

    float tax;
    if( money < tax_limit){
        tax = money * 0.15;
    }
    else{
        tax = tax_limit * 0.15 + (money - tax_limit) *0.28;
    }

    cout << tax;

    system("pause");
    return 0;
}