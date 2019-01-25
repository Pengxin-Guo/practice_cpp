/*************************************************************************
	> File Name: overload_logic_and.cpp
	> Author: gpx
	> Mail: 1457495424@qq.com
	> Created Time: 2019年01月21日 星期一 19时20分21秒
 ************************************************************************/
// && 和 || 不推荐重载

#include <iostream>
using namespace std;

int func(int i) {
    cout << "func::i = " << i << endl;
    return i;
}

class Test {
    private:
    int i;
    public:
    Test(int v = 0) : i(v) {}
    int getI() const {
        return i;
    }
};

bool operator&&(const Test &obj1, const Test &obj2) {
    return obj1.getI() && obj2.getI();
}

bool operator||(const Test &obj1, const Test &obj2) {
    return obj1.getI() || obj2.getI();
}

Test gunc(Test obj) {
    cout << "Test::obj.i = " << obj.getI() << endl;
    return obj;
}

int main() {
    Test t1(1), t2(0);
    if (gunc(t1) && gunc(t2)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    if (gunc(t2) || gunc(t1)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}
