//输入两个正整数a和b(a<b)，输出a与b之间所有的素数。

#include <iostream>

using namespace std;

int main()
{
    //输入正整数a和b
    int a, b;
    cout << "请输入一个正整数a=";
    cin >> a;
    cout << "请输入另一个(注意要大于a)正整数b=";
    cin >> b;

    //输出a至b之间所有的素数

    cout << a << "与" << b << "之间所有的素数为：" << endl;

    int i;
    for (i = a; i <= b; i++)
    {
        //如果i为素数则输出i

        //搜寻2至i-1中是否存在i的约数
        int j;
        for (j = 2; j <= i - 1; j++)
        {
            if (i % j == 0)
                break;
        }

        //根据前面搜寻结果决定是否输出i

        if (j == i)
            cout << i << "  "; //j==i说明上面的for循环是正常结束，break没有执行，故i是素数

        if (i == b)
        {
            cout << "无" << endl;
        }
    }
    cout << endl;

    system("pause");
    return 0;
}
//修改一下程序使得当输入的a与b之间不存在任何素数(比如输入8和9)时
//输出信息修正为“a与b之间没有素数”，而不再显示“a与b之间所有的素数为：”