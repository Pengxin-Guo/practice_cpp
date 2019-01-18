/*************************************************************************
	> File Name: template_func.cpp
	> Author: gpx
	> Mail: 1457495424@qq.com
	> Created Time: 2019年01月18日 星期五 09时06分46秒
 ************************************************************************/

#include <iostream>
using namespace std;

int add(int a, int b) {
    cout << "add(int, int)" << endl;
    return a + b;
}

int add(int a) {
    cout << "add()" << endl;
    return a;
}

template <typename T>
int add(T a, T b) {
    cout <<"add(T, T)" << endl;
    return a + b;
}

int add(...) {
    cout << "add(...)" << endl;
    return 10;
}

int add(double a, double b) {
    cout << "add(double, double)" << endl;
    return a + b;
}

int main() {
    cout << add<>(1, 3) << endl;
    cout << add(1, 3) << endl;
    cout << add(2.4, 3.6) << endl;
    cout << add(3) << endl;
    return 0;
}
