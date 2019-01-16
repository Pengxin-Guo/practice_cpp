/*************************************************************************
	> File Name: mul_inherit.cpp
	> Author: gpx
	> Mail: 1457495424@qq.com
	> Created Time: 2019年01月16日 星期三 14时49分31秒
 ************************************************************************/

#include <iostream>
using namespace std;

class BaseA {
    public:
    virtual void funcA() {
        cout << "BaseA::funcA" << endl;
    }
};

class BaseB {
    public:
    virtual void funcB() {
        cout << "BaseB::funcB" << endl;
    }
};

class Inherit : public BaseA, public BaseB {

};

int main() {
    cout << sizeof(Inherit) << endl;
    Inherit d;
    BaseA *p1 = &d;
    BaseB *p2 = &d;
    p1->funcA();
    p2->funcB();
    BaseB *pb = (BaseB *)p1;
    pb->funcB();
    BaseB *pbb = dynamic_cast<BaseB *>(p1);
    pbb->funcB();
    return 0;
}
