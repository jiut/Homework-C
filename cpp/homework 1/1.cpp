#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int exitProgram(int code)//统一退出函数
{
    cout << "谢谢您使用本程序，再见！\n";
    system("pause");
    exit(code);
}

double errorCheck(int a, int b)//输入的同时进行错误检查
{
    int num;
    cin >> num;

    for (int flag = 0; num < a || num > b;)
    {
        flag++;//进入时便计数一次
        if (flag == 3)
        {
            cout << "错误次数过多\n";
            exitProgram(1);
        }

        cout << "错误，重新输入\n";
        cin >> num;
    }

    return num;
}

int main()
{
    cout << "请选择还贷方式：1等额本息\t2等额本金\n";
    int flag = errorCheck(1, 2);
    cout << "您选择的是";
    if (flag == 1)
    {
        cout << "等额本息";
    }
    if (flag == 2)
    {
        cout << "等额本金";
    }
    cout << "还贷方式\n";

    cout << "请输入购房单价（元/平方米）：";
    double value;
    cin >> value;

    cout << "请输入购房面积（平方米）：";
    int area;
    cin >> area;

    cout << "房款总额：" << fixed << setprecision(0) << value * area << "元\n";

    cout << "请输入贷款年利率（输入%上的数字，最多输入小数点后两位）：";
    double r;
    cin >> r;
    r /= 100.0 * 12.0; //月利率

    cout << "请输入首付成数（2-8之间的数字）：";
    int ratio = errorCheck(2, 8);

    cout << "请输入贷款年限（年，最高不超过30年）：";
    int deadline = errorCheck(1, 30);

    //以下为运算部分
    int M, n = 12 * deadline;
    double x, sum;

    M = (10 - ratio) * area * value / 10;
    if (flag == 1)
    {
        x = M * r * pow(1 + r, n) / (pow(1 + r, n) - 1);
        sum = x * n;
    }
    if (flag == 2)
    {
        sum = M * (r * (n + 1) + 2) / 2;
    }

    // 以下为输出部分
    cout << "首付金额：" << fixed << setprecision(0) << area * value - M << "元\n";
    cout << "贷款本金：" << fixed << setprecision(0) << M << "元\n";
    cout << "还款总额：" << fixed << setprecision(2) << sum << "元\n";
    cout << "利息总额：" << fixed << setprecision(2) << sum - M << "元\n";
    cout << "贷款月数" << n << "月\n";
    cout << "月供金额：";
    if (flag == 1)
    {
        cout << x << "元\n";
    }
    if (flag == 2)
    {
        cout << "请选择是否需要查询某些月份的月供金额：1是\t2否\n";
        flag = errorCheck(1, 2);
        if (flag == 2)
        {
            exitProgram(0);
        }
        cout << "请输入要查询的起始月（从第几个月开始查）：";
        int start = errorCheck(1, n);
        cout << "请输入要查询的终止月（查到第几个月为止）：";
        int end = errorCheck(start, n);

        for (int i = start; i <= end; i++)
        {
            cout << "您第" << i << "个月的月供金额为" << M * (r * (n - i + 1) + 1) / n << "元\n";
        }
    }

    exitProgram(0);
}