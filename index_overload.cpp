/*************************************************************************
	> File Name: index_overload.cpp
	> Author: gpx
	> Mail: 1457495424@qq.com
	> Created Time: 2019年01月18日 星期五 19时42分50秒
 ************************************************************************/
// []重载
// 1.只能重载为成员函数
// 2.只能有1个参数

#include <iostream>
using namespace std;

class Test {
    private:
    int a[10];
    public:
    int& operator[](int index) {
        return a[index];
    }
    int& operator[](const string &s) {
        if (s == "1st") return a[0];
        else if (s == "2nd") return a[1];
        else if (s == "3th") return a[2];
        else if (s == "4th") return a[3];
        else if (s == "5th") return a[4];
        else return a[9];
    }
};

int main() {
    Test t;
    for (int i = 0; i < 5; i++) {
        t[i] = i + 1;
    }
    cout << t["1st"] << endl;
    cout << t["2nd"] << endl;
    cout << t["3th"] << endl;
    cout << t["4th"] << endl;
    cout << t["5th"] << endl;
    return 0;
}
