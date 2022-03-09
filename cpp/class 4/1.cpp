//指针变量的运算
//指针变量可以进行自增和自减以及加和减运算
#include <iostream>

using namespace std;

int main()
{
	int i=10;
    double d=3.4;

    int *ip=&i;
    double *dp=&d;

    cout<<"sizeof(int)="<<sizeof(int)<<"  "
        <<"sizeof(double)="<<sizeof(double)<<endl;
    cout<<endl;

    cout<<"初始时ip和dp中保存的地址和指向的变量值"<<endl;
    cout<<"ip="<<(int)ip<<"  "<<"dp="<<(int)dp<<endl; 
    cout<<"*ip="<<*ip<<"  "<<"*dp="<<*dp<<endl; 
    cout<<endl;

    ip++;
    dp++;
    cout<<"自增后ip和dp中保存的地址"<<endl;
    cout<<"ip="<<(int)ip<<"  "<<"dp="<<(int)dp<<endl; 
    cout<<"*ip="<<*ip<<"  "<<"*dp="<<*dp<<endl; 
    cout<<endl;

    ip+=3;
    dp+=3;
    cout<<"加3后ip和dp中保存的地址"<<endl;
    cout<<"ip="<<(int)ip<<"  "<<"dp="<<(int)dp<<endl;
    cout<<"*ip="<<*ip<<"  "<<"*dp="<<*dp<<endl; 
    cout<<endl;

    ip-=6;
    dp-=6;
    cout<<"减6后ip和dp中保存的地址"<<endl;
    cout<<"ip="<<(int)ip<<"  "<<"dp="<<(int)dp<<endl;
    cout<<"*ip="<<*ip<<"  "<<"*dp="<<*dp<<endl; 
    cout<<endl; 
}