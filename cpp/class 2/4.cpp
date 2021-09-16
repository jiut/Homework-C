#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int money;
    cout << "月收入";
    cin >> money;

    if (money <= 0){
        cout << "错误";
        system("pause");
        return 0;
    }

    int tax_limit[] = {5000, 8000, 17000, 30000, 40000, 60000, 85000};
    float tax_rate[] = {0.03, 0.1, 0.2, 0.25, 0.3, 0.35, 0.45};
    int flag = 0;
    for (int i = 0; i < 7; i++) {
        if(i < 6){
            if( money > tax_limit[i+1] ){
                tax_limit[i] = tax_limit[i+1] - tax_limit[i];
                continue;
            }
            else{
                flag = i;
                tax_limit[i] = money - tax_limit[i];
                if(tax_limit[i] < 0){
                    tax_limit[i] = 0;
                }
                break;
            }
        }
        else{
            flag = 6;
            tax_limit[i] = money - tax_limit[i];
        }
    }

    float sum = 0;
    for (int i = 0; i <= flag; i++) {
        sum += tax_rate[i] * tax_limit[i];
    }

    cout << fixed << setprecision(2) << sum << endl;

    system("pause");
    return 0;
}