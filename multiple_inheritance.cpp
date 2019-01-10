/*************************************************************************
	> File Name: multiple_inheritance.cpp
	> Author: gpx
	> Mail: 1457495424@qq.com
	> Created Time: 2019年01月10日 星期四 20时52分54秒
 ************************************************************************/

#include <iostream>
using namespace std;

class A {
    private :
        string name;
        int age;
    public :
        void print() { 
            cout << name << " " << age << endl;
        }
};
class B : public A {};
class C : public A {};
class D : public B, public C {};

int main() {
    D d;
    cout << &d << endl;
    B *pb = &d;
    C *pc = &d;
    cout << pb << " " << pc << endl;
    void *pbb = pb;
    void *pcc = pc;
    cout << pbb << " " << pcc << endl;
    d.B::print();
    d.C::print();
    return 0;
}
