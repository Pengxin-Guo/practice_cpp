/*************************************************************************
    > File Name: inherit.cpp
    > Author: gpx
    > Mail: 1457495424@qq.com
    > Created Time: 2019年01月08日 星期二 19时52分53秒
************************************************************************/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class Father {
protected :
    int i;
public :
    Father() {
        i = 100;
    }
    int get() { 
        return i;
    }
    void say() { 
        cout << "I'm Father." << endl;
    }
};

class Son : public Father {
private :
    int age;
public :
    void say() { 
        cout << "I'm Son." << endl;
    }
    int getAge() { 
        return age;
    }
    int add(int j) { 
        age = i + j;
    }
};

void how_to_say(Father *f) {
    f->say();
}

int main() {
    Father f;
    Son s;
    cout << s.getAge() << endl;
    cout << s.get() << endl;
    how_to_say(&f);
    how_to_say(&s);
    return 0;
}
