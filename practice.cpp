/*************************************************************************
	> File Name: practice.cpp
	> Author: gpx
	> Mail: 1457495424@qq.com
	> Created Time: 2018年12月25日 星期二 18时09分28秒
 ************************************************************************/

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

namespace my_lib {
    class People {
        private :
        int age;
        string name;
        public :
        People(string s) {
            name = s;
        }
        int getAge() {
            return this->age;
        }
        string getName() {
            return name;
        }
    };
};


struct student {
    void fun() {
        printf("hello haizeix\n");
        return ;
    }
};

using my_lib::People;

void swap(int &a, int &b) {
    a ^= b;
    b ^= a;
    a ^= b;
    return ;
}

int &f() {
    int a = 1;
    int &b = a;
    return b;
}

int add() {
    return 1;
}

int add(int a, int b) {
    return a + b;
}


int main() {
    /*
    People people("gpx");
    cout << people.getName() << endl;
    People *p1 = new People("gpx1");
    cout << p1->getName() << endl;
    delete p1;
    
    const int a = 5;
    int *p = (int *)&a;
    *p = 6;
    cout << a << ", " << *p << endl;

    int a = 1, b = 2;
    (a > b ? a : b) = 3;
    cout << a << " " << b << endl;
    int c = f();
    cout << c << endl;
    swap(a, b);
    cout << a << " " << b << endl;
    */
    
    int (*p1)(int, int);
    int (*p2)();
    p1 = add;
    p2 = add;
    printf("%p, %p\n", p1, p2);
    
    return 0;
}
