/*************************************************************************
	> File Name: new_delete.cpp
	> Author: gpx
	> Mail: 1457495424@qq.com
	> Created Time: 2019年01月01日 星期二 18时10分08秒
 ************************************************************************/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    /*  type *name = new type;
        delete name;
        type *name = new type(value);
        delete name;
        type *name = new type[length]; 
        delete []name;
    */
    int *p = new int;
    *p = 5;
    cout << *p << endl;
    delete p;
    int *q = new int(10);
    cout << *q << endl;
    delete q;
    int *l = new int[10];
    for (int i = 0; i < 10; i++) {
        l[i] = i + 1;
        cout << l[i] << endl;
    }
    delete []l;
    return 0;
}
