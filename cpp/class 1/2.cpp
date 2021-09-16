#include <iostream>
using namespace std;

int main(){
    float mile, petrol;

    cout << "输入里程(公里)";
    cin >> mile;
    cout << "输入耗油量(升)";
    cin >> petrol;

    cout << "每100公里的耗油量" << petrol / mile * 100.0 << "升" << endl;

    cout << "燃烧每1加仑汽油行驶" <<  (mile / 1.6) / (petrol / 3.875) << "英里" << endl;

    system("pause");
    return 0;
}