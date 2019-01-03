/*************************************************************************
	> File Name: copy_constructor.cpp
	> Author: gpx
	> Mail: 1457495424@qq.com
	> Created Time: 2019年01月01日 星期二 20时53分01秒
 ************************************************************************/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class Test {
    private:
        int a;
        int *p;
    public:
        Test() {
            p = new int(1);
            cout << "Test()" << endl;
        }
        Test(int value) {
            a = value;
            p = new int(1);
            cout << "Test(int) " << a << endl;
        }
        
        Test(const Test& obj) {
            a = obj.a;
            p = obj.p;
            //p = new int;
            *p = *obj.p;
        }
        
        int* getP() {
            return p;    
        }
        int get() {
            return *p;
        }
        void free() {
            cout << "free " << p << endl;
            delete p;
        }
} ;

int main() {
    Test t1(2);
    Test t2 = t1;
    cout << "t1:" << &t1 << "  t2:" << &t2 << endl;
    cout << t1.get() << " " << t1.getP() << endl;
    cout << t1.get() << " " << t2.getP() << endl;
    t1.free();
    t2.free();
    return 0;
}
