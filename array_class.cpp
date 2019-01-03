/*************************************************************************
    > File Name: array_class.cpp
    > Author: gpx
    > Mail: 1457495424@qq.com
    > Created Time: 2019年01月01日 星期二 20时16分13秒
************************************************************************/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class Array {
private:
    int *data;
    int length;
public:
    Array() {
        length = 10;
        data = new int[length];
    }
    Array(int len) {
        length = len;
        data = new int[length];
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
    return 0;
}
