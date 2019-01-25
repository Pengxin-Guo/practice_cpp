/*************************************************************************
	> File Name: my_pointer.cpp
	> Author: gpx
	> Mail: 1457495424@qq.com
	> Created Time: 2019年01月21日 星期一 18时38分47秒
 ************************************************************************/
// -> 和 * 重载
// 1.只能重载为成员函数
// 2.不能有参数

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
        if (this != &obj) {  // 防止自赋值
            delete mp;
            mp = obj.mp;
            const_cast<SmartPoint &>(obj).mp = NULL; // 防止两个指针指向同一地址空间
        }
        return *this;
    }
    ~SmartPoint() {
        delete mp;
    }
};

int main() {
    for (int i = 0; i < 5; i++) {
        SmartPoint p = new Test(i);  // 等价于 SmartPoint p(new Test(i));
        cout << p->getI() << endl;
    }
    SmartPoint p1(new Test(1));
    SmartPoint p2(new Test(2));
    return 0;
}
