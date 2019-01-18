/*************************************************************************
	> File Name: try_catch.cpp
	> Author: gpx
	> Mail: 1457495424@qq.com
	> Created Time: 2019年01月18日 星期五 15时00分38秒
 ************************************************************************/

#include <iostream>
using namespace std;

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
                throw "Run Error";
            } break;
            case -2: {
                throw "Parameter Error";
            } break;
            case -3: {
                throw "Segment fault";
            } break;
        }
    }
    return ;
}

int main() {
    /*
    try {
        try {
            throw 'a';
        } catch(int i) {
            cout << "catch(int i) " << i << endl;
            throw i;
        } catch(...) {
            cout << "catch(...)" << endl;
            throw;
        }
    } catch(char c) {
        cout << "information is : " << c << endl;
    } catch(...) {
        cout << "other exception" << endl;
    }
    cout << "done" << endl;
    */

    int i;
    while (cin >> i) {
        try {
            myfunc(i);
        } catch(const char *s) {
            cout << "exception information is " << s << endl;
        }
        cout << "done" << endl;
    }
    return 0;
}
