/*************************************************************************
	> File Name: polymorphic.cpp
	> Author: gpx
	> Mail: 1457495424@qq.com
	> Created Time: 2019年01月16日 星期三 09时30分30秒
 ************************************************************************/

#include <iostream>
using namespace std;

class Parent {
    public:
    virtual void say() {
        cout << "I'm Parent" << endl;
    }
};

class Child : public Parent {
    public:
    void say() {
        cout << "I'm Child" << endl;
    }
};

void how_to_say(Parent *p) {
    p->say();
}

int main() {
    Parent p;
    Child c;
    how_to_say(&p);
    how_to_say(&c);
    return 0;
}
