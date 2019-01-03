/*************************************************************************
	> File Name: init.cpp
	> Author: gpx
	> Mail: 1457495424@qq.com
	> Created Time: 2019年01月03日 星期四 18时14分19秒
 ************************************************************************/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class Value {
private:
    int i;
public:
    Value(int a) : i(a) {
        cout << "Value :: i = " << i << endl;
    }
};

class Test {
private:
    const int i;
    int j;
    Value v1;
    Value v2;
    Value v3;
public:
    /*
    Test(int a, int b) : i(a), j(b), v1(1), v3(3), v2(2) {
        cout << "i = " << i << endl;
    }*/
    Test(int a, int b);
};

Test::Test(int a, int b) : i(a), j(b), v1(1), v3(3), v2(2) {
    cout << "i = " << i << endl;
    cout << "j = " << j << endl;
}

int main() {
    Test t(10, 20);
    return 0;
}
