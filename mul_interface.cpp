/*************************************************************************
	> File Name: mul_interface.cpp
	> Author: gpx
	> Mail: 1457495424@qq.com
	> Created Time: 2019年01月16日 星期三 15时19分12秒
 ************************************************************************/

#include <iostream>
using namespace std;

class Base {
    protected:
    int a;
    public:
    Base(int v) {
        a = v;
    }
    int get() {
        return a;
    }
    bool equal(Base *p) {
        return p == this;
    }
};

class Interface1 {
    public:
    virtual void add(int i) = 0;
    virtual void sub(int i) = 0;
};

class Interface2 {
    public:
    virtual void mul(int i) = 0;
    virtual void div(int i) = 0;
};

class Inherit : public Base, public Interface1, public Interface2 {
    public:
    Inherit(int i) : Base(i) {}
    void add(int i) {
        a += i;
        return ;
    }
    void sub(int i) {
        a -= i;
        return ;
    }
    void mul(int i) {
        a *= i;
        return ;
    }
    void div(int i) {
        if (i == 0) return ;
        a /= i;
    }
};

int main() {
    Inherit d(10);
    Inherit *p = &d;
    Interface1 *p1 = &d;
    Interface2 *p2 = &d;
    if (p->equal(dynamic_cast<Base *>(p1)) && p->equal(dynamic_cast<Base *>(p2))) {
        p1->add(10);
        p1->sub(5);
        p2->mul(10);
        p2->div(15);
    }
    cout << p->get() << endl;
    return 0;
}
