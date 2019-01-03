/*************************************************************************
	> File Name: destructor.cpp
	> Author: gpx
	> Mail: 1457495424@qq.com
	> Created Time: 2019年01月03日 星期四 18时49分20秒
 ************************************************************************/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class Value {
private:
    int i;
public:
    Value(int a) {
        i = a;
        cout << "hello Value " << i << endl;
    }
    ~Value() {
        cout << "ByeBye Value " << i << endl;
    }
};

class Test {
private:
    Value v1;
    Value v2;
public:
    Test() : v1(1), v2(2) {
        cout << "hello" << endl;
    }
    ~Test() {
        cout << "ByeBye" << endl;
    }
};

int main() {
    Test t;
    return 0;
}
