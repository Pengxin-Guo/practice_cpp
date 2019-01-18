/*************************************************************************
	> File Name: template_specialization.cpp
	> Author: gpx
	> Mail: 1457495424@qq.com
	> Created Time: 2019年01月18日 星期五 10时42分53秒
 ************************************************************************/

#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Test {
    public:
    void add(T1 a, T2 b) {
        cout << "add(T1, T2) " << a + b << endl;
        return ;
    }
};

// 部分特化(偏特化)
template <typename T>
class Test<T, T> {
    public:
    void add(T a, T b) {
        cout << "add(T, T) " << a + b << endl;
        return ;
    }
    void print() {
        cout << "print()" << endl;
        return ;
    }
};

template <typename T>
class Test<T*, T*> {
    public:
    void add(T *a, T *b) {
        cout << "add(T*, T*) " << *a + *b << endl;
        return ;
    }
};

/*
template <typename T>
class Test<T, int> {
    public:
    void add(T a, int b) {
        cout << "add(T, int) " << a + b << endl;
        return ;
    }
};
*/

// 完全特化
template <>
class Test<void*, void*> {
    public:
    void add(void *a, void *b) {
        cout << "add(void*, void*) error" << endl;
        return ;
    }
};

/*
// 函数模板的完全特化
template <typename T>
bool equal(T a, T b) {
    cout << "equal(T, T)" << endl;
    return a == b;
}

template <>
bool equal<double>(double a, double b) {
    cout << "equal(double, double)" << endl;
    double temp = a - b;
    return abs(temp) < 0.000001;
}
*/

int main() {
    Test<int, float> t1;
    t1.add(2, 4.3);
    Test<int, int> t2;
    t2.add(1, 2);
    int a = 1, b = 2;
    Test<int*, int*> t3;
    t3.add(&a, &b);
    Test<void*, void*> t4;
    t4.add(NULL, NULL);
    /*
    cout << equal(1, 2) << endl;
    cout << equal(3.2, 3.2) << endl;
    cout << equal(3.1, 3.2) << endl;
    */
    return 0;
}
