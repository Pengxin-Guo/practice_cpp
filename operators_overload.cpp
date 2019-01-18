/*************************************************************************
	> File Name: operators_overload.cpp
	> Author: gpx
	> Mail: 1457495424@qq.com
	> Created Time: 2019年01月18日 星期五 16时19分23秒
 ************************************************************************/

#include <iostream>
using namespace std;

class Complex {
    private:
    double real;
    double imag;
    public:
    Complex(double v1 = 0, double v2 = 0) : real(v1), imag(v2) {}
    double getR() {
        return this->real;
    }
    double getI() {
        return this->imag;
    }
    //friend Complex operator+(const Complex &c1, const Complex &c2);
    Complex operator+(const Complex &c);
    Complex operator-(const Complex &c);
    Complex operator*(const Complex &c);
    Complex operator/(const Complex &c);
    bool operator==(const Complex &c);
    bool operator!=(const Complex &c);
    Complex& operator=(const Complex &c);
};

/*
Complex operator+(const Complex &c1,const Complex &c2) {
    Complex ret;
    ret.real = c1.real + c2.real;
    ret.imag = c1.imag + c2.imag;
    return ret;
}
*/

Complex Complex::operator+(const Complex &c) {
    Complex ret;
    ret.real = this->real + c.real;
    ret.imag = this->imag + c.imag;
    return ret;
}

Complex Complex::operator-(const Complex &c) {
    Complex ret;
    ret.real = this->real - c.real;
    ret.imag = this->imag - c.imag;
    return ret;
}

Complex Complex::operator*(const Complex &c) {
    Complex ret;
    ret.real = this->real * c.real - this->imag * c.imag;
    ret.imag = this->imag * c.real + this->real * c.imag;
    return ret;
}

Complex Complex::operator/(const Complex &c) {
    int deno = c.real * c.real + c.imag * c.imag;
    Complex ret;
    ret.real = (this->real * c.real + this->imag * c.imag) / deno;
    ret.imag = (this->imag * c.real - this->real * c.imag) / deno;
    return ret;
}

bool Complex::operator==(const Complex &c) {
    return ((this->real == c.real) && (this->imag == c.imag));
}

bool Complex::operator!=(const Complex &c) {
    return ((this->real != c.real) || (this->imag != c.imag));
}

Complex& Complex::operator=(const Complex &c) {
    if (this != &c) { // 不允许自赋值
        this->real = c.real;
        this->imag = c.imag;
    }
    return *this;
}

int main() {
    Complex c1(1, 2);
    Complex c2(2, 3);
    Complex c3;
    cout << "c1 = " << c1.getR() << "+" << c1.getI() << "i" << endl;
    cout << "c2 = " << c2.getR() << "+" << c2.getI() << "i" << endl;
    //c3 = operator+(c1, c2);
    c3 = c1 + c2;
    cout << "c1 + c2 = " << c3.getR() << "+" << c3.getI() << "i" << endl;
    c3 = c1 - c2;
    cout << "c1 - c2 = " << c3.getR() << "+" << c3.getI() << "i" << endl;
    c3 = c1 * c2;
    cout << "c1 * c2 = " << c3.getR() << "+" << c3.getI() << "i" << endl;
    c3 = c1 / c2;
    cout << "c1 / c2 = " << c3.getR() << "+" << c3.getI() << "i" << endl; 
    cout << "c1 == c2 ? " << (c1 == c2) << endl;
    cout << "c1 != c2 ? " << (c1 != c2) << endl;
    return 0;
}
