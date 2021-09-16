#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "5位整数";
    cin >> num;

    if (num < 10000 || num > 99999)
    {
        cout << "错误";
        system("pause");
        return 0;
    }

    int n[5];
    for (int i = 4; i >= 0; i--)
    {
        n[i] = num % 10;
        num /= 10;

        if (i == 0)
        {
            cout << n[i] << endl;
        }
        else
        {
            cout << n[i] << " ";
        }
    }

    for (int i = 0; i <= 4; i++)
    {
        if (i == 4)
        {
            cout << n[i] << endl;
        }
        else
        {
            cout << n[i] << " ";
        }
    }

    system("pause");
    return 0;
}