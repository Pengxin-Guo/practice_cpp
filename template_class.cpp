/*************************************************************************
	> File Name: template_class.cpp
	> Author: gpx
	> Mail: 1457495424@qq.com
	> Created Time: 2019年01月18日 星期五 09时36分05秒
 ************************************************************************/

#include <iostream>
using namespace std;

template <typename T>
class Test {
    private:
    T a;
    public:
    Test(T v) : a(v) {}
    T get() {
        return a;
    }
    T add(T b) {
        return a + b;
    }
    T sub(T b) {
        return a - b;
    }

};

string operator-(const string &s1, const string &s2) {
    return "0";
}

int main() {
    Test<int> t(0);
    cout << t.get() << endl;
    cout << t.add(10) << endl;
    Test<string> s("ldc");
    cout << s.get() << endl;
    cout << s.add("c") << endl;
    cout << s.sub("c") << endl;
    return 0;
}
