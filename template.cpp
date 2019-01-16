/*************************************************************************
	> File Name: template.cpp
	> Author: gpx
	> Mail: 1457495424@qq.com
	> Created Time: 2019年01月16日 星期三 15时57分51秒
 ************************************************************************/

#include <iostream>
using namespace std;
#define swap(t, a, b) { \
    t (_temp) = a; \
    (a) = (b); \
    (b) = (_temp); \
}

void my_swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    return ;
}

void my_swap(double &a, double &b) {
    double temp = a;
    a = b;
    b = temp;
    return ;
}

void my_swap(string &s1, string &s2) {
    string temp = s1;
    s1 = s2;
    s2 = temp;
    return ;
}

template <typename T>
void my_swap1(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

class Test {
    public:
    Test(const Test &t) {

    }
    Test() {
        
    }
};

template <typename T>
void my_sort(T *a, int len) {
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            if (a[i] > a[j]) {
                my_swap1(a[i], a[j]);
            }
        }
    }
    return ;
}

template <typename T>
void print(T *a, int len) {
    for (int i = 0; i < len; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return ;
}

template <typename T1, typename T2, typename T3>
T1 add(T2 a, T3 b) {
    //return a + b;
    return static_cast<T1>(a + b);
}

int main() {
    int a = 10, b  =20;
    double c = 3.2, d = 4.5;
    string str1 = "ldc", str2 = "cxh";
    cout << a << " " << b << endl;
    cout << c << " " << d << endl;
    cout << str1 << " " << str2 << endl;
    cout << "swap" << endl;
    swap(int , a, b);
    swap(double, c, d);
    swap(string, str1, str2);
    cout << a << " " << b << endl;
    cout << c << " " << d << endl;
    cout << str1 << " " << str2 << endl;
    cout << "swap" << endl;
    my_swap(a, b);
    my_swap(c, d);
    my_swap(str1, str2);
    cout << a << " " << b << endl;
    cout << c << " " << d << endl;
    cout << str1 << " " << str2 << endl;
    cout << "swap" << endl;
    my_swap1(a, b);
    my_swap1(c, d);
    my_swap1(str1, str2);
    cout << a << " " << b << endl;
    cout << c << " " << d << endl;
    cout << str1 << " " << str2 << endl;
    Test t1, t2;
    my_swap1(t1, t2);
    
    int arr1[5] = {3, 2, 1, 4, 6};
    double arr2[5] = {3.1, 4.5, 2, 1.7, 4.3};
    string arr3[5] = {"c", "python", "java", "c++", "c#"};
    my_sort<int>(arr1, 5); // 显示指定参数类型
    print<int>(arr1, 5);
    my_sort(arr2, 5);
    print(arr2, 5);
    my_sort(arr3, 5);
    print(arr3, 5);
    
    int r1 = add<int>(0.5, 0.3); // 返回值类型必须明确指出
    int r2 = add<int, float>(0.3, 0.6); // 从左到右部分指定类型
    int r3 = add<int, float, float>(0.5, 0.5);
    cout << r1 << " " << r2 << " " << r3 << endl;
    return 0;
}
