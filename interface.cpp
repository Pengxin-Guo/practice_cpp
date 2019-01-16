/*************************************************************************
	> File Name: interface.cpp
	> Author: gpx
	> Mail: 1457495424@qq.com
	> Created Time: 2019年01月16日 星期三 14时40分22秒
 ************************************************************************/

#include <iostream>
using namespace std;

class Interface {
    public:
    virtual bool open() = 0;
    virtual bool close() = 0;
    virtual bool send(char *str, int len) = 0;
    virtual bool recv(char *buffer, int len) = 0;
};

int main() {
    return 0;
}
