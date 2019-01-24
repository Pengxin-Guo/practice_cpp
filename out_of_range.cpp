/*************************************************************************
	> File Name: out_of_range.cpp
	> Author: gpx
	> Mail: 1457495424@qq.com
	> Created Time: 2019年01月24日 星期四 19时55分48秒
 ************************************************************************/

#include <iostream>
#include <exception>
using namespace std;

int main() {
    int n;
    int a[10] = {0};
    cin >> n;
    try {
        if (n < 10 && n >= 0) {
            for (int i = 0; i < n; i++) {
                a[i] = i + 1;
            }
        } else {
            throw out_of_range("out_of_range");
        }
    } catch (out_of_range &e) {
        cout << e.what() << endl;
    } catch (...) {
        cout << "other exception" << endl;
    }
    cout << "done" << endl;
    return 0;
}
