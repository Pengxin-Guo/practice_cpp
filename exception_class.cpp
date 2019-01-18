/*************************************************************************
	> File Name: exception_class.cpp
	> Author: gpx
	> Mail: 1457495424@qq.com
	> Created Time: 2019年01月18日 星期五 15时19分32秒
 ************************************************************************/

#include <iostream>
using namespace std;

class Base {};
class Exception : public Base {
    private:
    int i;
    string info;
    public:
    Exception(int v1, string s1) : i(v1), info(s1) {}
    void what() {
        cout << "exception id is " << i << endl;
        cout << "exception info is " << info << endl;
    }
};

void func(int i) {
    if (i < 10) {
        throw -1;
    } else if (i < 20) {
        throw -2;
    } else if (i < 30) {
        throw -3;
    }
    return ;
}

void myfunc(int i) {
    try {
        func(i);
    } catch (int i) {
        switch (i) {
            case -1: {
                throw Exception(-1, "Run Error");
            } break;
            case -2: {
                throw Exception(-2, "Parameter Error");
            } break;
            case -3: {
                throw Exception(-3, "Segment fault");
            } break;
        }
    }
    return ;
}


int main() {
    int i;
    while (cin >> i) {
        try {
            myfunc(i);
        } catch(Exception e) {
            cout << "exception info is :" << endl;
            e.what();
        } catch(Base &b) {
            cout << "Base exception" << endl;
        } catch(...) {
            cout << "other exception" << endl;
        }
        cout << "done" << endl;
    }
    return 0;
}
