/*************************************************************************
	> File Name: operator.cpp
	> Author: gpx
	> Mail: 1457495424@qq.com
	> Created Time: 2019年01月01日 星期二 18时48分06秒
 ************************************************************************/

#include "operator.h"

void Operator::setValue(double a, double b) {
    m = a;
    n = b;
    return ;
}

bool Operator::setOp(char p) {
    bool ret = false;
    if (p == '+' || p == '-' || p == '*' || p == '/') {
        ret = true;
        op = p;
    }
    return ret;
}

bool Operator::result(double &r) {
   bool ret = true;
    switch (op) {
        case '+' : {
            r = m + n;
        } break;
        case '-' : {
            r = m - n;
        } break;
        case '*' : {
            r = m * n;
        } break;
        case '/' : {
            if ((n - 0.00001) <= 0.00001) {
                r = 0;
                ret = false;
            } else {
                r = m / n;
            }
        } break;
        default : {
            ret = false;
        } break;
    }
}
