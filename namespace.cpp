/*************************************************************************
	> File Name: namespace.cpp
	> Author: gpx
	> Mail: 1457495424@qq.com
	> Created Time: 2019年01月01日 星期二 18时19分01秒
 ************************************************************************/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

namespace my_lib {
    int i = 10;
    namespace my_libl {
        int i = 100;
    }
}

using namespace my_lib;

int main() {
    cout << my_lib::i << endl << my_lib::my_libl::i << endl;
    return 0;
}
