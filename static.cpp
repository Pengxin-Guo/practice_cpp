/*************************************************************************
	> File Name: static.cpp
	> Author: gpx
	> Mail: 1457495424@qq.com
	> Created Time: 2019年01月03日 星期四 19时55分38秒
 ************************************************************************/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class Test {
private:
    static int cnt;
public:
    Test() {
        cnt += 1;
    }
    static int getCnt() {
        return cnt;
    }
    ~Test() {
        cnt -= 1;
    }
};

int Test::cnt = 0;

int main() {
    cout << Test::getCnt() << endl;
    Test t1;
    cout << Test::getCnt() << endl;
    Test *t2 = new Test;
    cout << Test::getCnt() << endl;
    delete t2;
    //Test t3;
    cout << Test::getCnt() << endl;
    return 0;
}
