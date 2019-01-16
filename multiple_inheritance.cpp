/*************************************************************************
	> File Name: multiple_inheritance.cpp
	> Author: gpx
	> Mail: 1457495424@qq.com
	> Created Time: 2019年01月10日 星期四 20时52分54秒
 ************************************************************************/

#include <iostream>
using namespace std;

class People {
    private:
    string name;
    int age;
    public:
    People(string s1, int v1) : name(s1), age(v1) {}
    void print() {
        cout << "name = " << name << " age = " << age << endl;
    }
};

class Teacher : virtual public People {
    public:
    Teacher(string s1, int v1) : People(s1, v1) {}
};

class Student : virtual public People {
    public:
    Student(string s1, int v1) : People(s1, v1) {}
};

class Doctor : public Teacher, public Student {
    public:
    Doctor(string s1, int v1) : Teacher(s1 + "1", v1 + 1), Student(s1 + "2", v1 + 2), People(s1, v1) {}
};

int main() {
    Doctor d("qqq", 28);
    d.Teacher::print();
    d.Student::print();
    return 0;
}
