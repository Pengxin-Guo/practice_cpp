/*************************************************************************
	> File Name: my_pointer.cpp
	> Author: gpx
	> Mail: 1457495424@qq.com
	> Created Time: 2019年01月21日 星期一 18时38分47秒
 ************************************************************************/

#include <iostream>
using namespace std;

class Test {
    private:
    int i;
    public:
    Test(int v = 0) : i(v) {}
    int getI() {
        return i;
    }
};

class SmartPoint {
    private:
    Test *mp;
    public:
    SmartPoint(Test *p = NULL) : mp(p) {}
    SmartPoint(const SmartPoint &obj) {
        mp = obj.mp;
        const_cast<SmartPoint &>(obj).mp = NULL;
    }
    Test* operator->() {
        return mp;
    }
    Test& operator*() {
        return *mp;
    }
    SmartPoint& operator=(const SmartPoint &obj) {
        if (this != &obj) {
            delete mp;
            mp = obj.mp;
            const_cast<SmartPoint &>(obj).mp = NULL;
        }
        return *this;
    }
    ~SmartPoint() {
        delete mp;
    }
};

int main() {
    for (int i = 0; i < 5; i++) {
        SmartPoint p = new Test(i);
        cout << p->getI() << endl;
    }
    SmartPoint p1(new Test(1));
    SmartPoint p2(new Test(2));
    return 0;
}
