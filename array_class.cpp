/*************************************************************************
    > File Name: array_class.cpp
    > Author: gpx
    > Mail: 1457495424@qq.com
    > Created Time: 2019年01月01日 星期二 20时16分13秒
************************************************************************/

#include <iostream>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;

class Array {
private:
    int *data;
    int length;
public:
    Array(int len = 0) {
        length = len;
        data = new int[length];
        memset(data, 0, sizeof(0));
    }
    Array& operator=(const Array &obj) {
    // 深拷贝
        if (this != &obj) {
            int *p = new int[obj.length];
            if (p) {
                for (int i = 0; i < obj.length; i++) {
                    p[i] = obj.data[i];
                }
            }
            this->length = obj.length;
            delete[] data;
            data = p;
        }
        return *this;
    }
    int getLength() {
        return length;
    }
    int getValue(int ind) {
        if (ind >= length || ind < 0) {
            cout << "getValue segment fault ";
            return -1;
        }
        return data[ind];
    }
    int& operator[](int ind) {
        if (ind >= 0 && ind < length) {
            return data[ind];
        } else {
            throw;
        }
    }
    bool setValue(int ind, int value) {
        if (ind >= length || ind < 0) {
            cout << "setValue " << ind << " segment faule " << endl;
            return false;
        }
        data[ind] = value;
        cout << "setValue " << ind << " success!" << endl;
        return true;
    }
    
    ~Array() {
        delete []data;
    }
} ;

int main() {
    /*
    Array arr;
    Array arr1(20);
    cout << "arr.length : " << arr.getLength() << endl;
    cout << "arr.data[2] : " << arr.getValue(2) << endl;
    cout << "arr.data[10] : " << arr.getValue(15) << endl;

    cout << "arr1.length : " << arr1.getLength() << endl;
    arr1.setValue(5, 15);
    arr1.setValue(21, 10);
    cout << "arr1.data[5] : " << arr1.getValue(5) << endl;
    cout << "arr1.data[25] : " << arr1.getValue(25) << endl;
    */
    Array a1(5);
    for (int i = 0; i < a1.getLength(); i++) {
        //a1.setValue(i, i + 1);
        a1[i] = i + 1;
    }
    for (int i = 0; i < a1.getLength(); i++) {
        cout << a1[i] << " ";
    }
    cout << endl;
    Array a2(10);
    for (int i = 0; i < a2.getLength(); i++) {
        a2[i] = i + 1;
    }
    a1 = a2;
    for (int i = 0; i < a1.getLength(); i++) {
        cout << a1.getValue(i) << " ";
    }
    cout << endl;
    return 0;
}
