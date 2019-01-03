/*************************************************************************
	> File Name: const.cpp
	> Author: gpx
	> Mail: 1457495424@qq.com
	> Created Time: 2019年01月03日 星期四 20时39分59秒
 ************************************************************************/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class Test{
private:
    int i;
    int j;
    const int m;
public:
    Test(int a, int b) : m(10) {
        this->i = a;
        this->j = b;
    }
    int getI() const {
        cout << "const ";
        return this->i;
    }
    int getI() {
        cout << "no const ";
        return this->j;
    }
    int getM() {
        return this->m;
    }
    int setM(int x) {
        int *p = const_cast<int *>(&m);
        *p = m;
        *p= x;
    }
};

int main() {
    const Test t(2, 3);
    cout << t.getI() << endl;
    Test t1(2, 3);
    cout << t1.getM() << endl;
    t1.setM(20);
    cout << t1.getM() << endl;
    return 0;
}
