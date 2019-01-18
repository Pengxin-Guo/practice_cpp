/*************************************************************************
	> File Name: template_par.cpp
	> Author: gpx
	> Mail: 1457495424@qq.com
	> Created Time: 2019年01月18日 星期五 11时35分21秒
 ************************************************************************/

#include <iostream>
using namespace std;

template <int N>
void fun() {
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        sum += i;
    }
    cout << sum << endl;
    return ;
}

template <typename T, int N> 
class Test {
    private:
    T a[N];
    public:
    Test() {
        for (int i = 0; i < N; i++) {
            a[i] = i + 1;
        }
    }
    void print() {
        for (int i = 0; i < N; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        return ;
    }
};

template <int N>
class Test<string, N> {
    private:
    string a[N];
    public:
    Test() {
        for (int i = 0; i < N; i++) {
            a[i] = "ldc";
        }
    }
     void print() {
        for (int i = 0; i < N; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        return ;
    }
};

int main() {
    fun<10> ();
    Test<int, 10> t;
    t.print();
    Test<string, 10> s;
    s.print();
    return 0;
}
