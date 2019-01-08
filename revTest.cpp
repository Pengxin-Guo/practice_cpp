/*************************************************************************
	> File Name: revTest.cpp
	> Author: gpx
	> Mail: 1457495424@qq.com
	> Created Time: 2019年01月08日 星期二 18时18分37秒
 ************************************************************************/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class Test {
    private:
        int i;
    public:
        Test(int v) { 
            i = v;
            cout << "Test(int i) : i = " << i << endl;
        }
        Test() {
            //Test(100);
            i = 0;
            cout << "Test() : i = " << i << endl;
        }
        Test(const Test &t) { 
            i = t.i;
            cout << "Test(const Test &t) : i = " << i << endl;
        }
        void printI() { 
            cout << "i = " << i << endl;
        }
};

void func1(Test t) {
    
}

Test func2() {
    //return Test(200);
    Test t(200);
    return t;
}

int main() {
    /*
    Test t = Test(100);
    t.printI();
    func1(t);
    */
    Test t = func2();
    t.printI();
    return 0;
}
