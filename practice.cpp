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

int main() {
    People p("gpx");
    cout << p.getName() << endl;
    People *p1 = new People("gpx1");
    cout << p1->getName() << endl;
    delete p1;
    return 0;
}
