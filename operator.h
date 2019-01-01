/*************************************************************************
	> File Name: operator.h
	> Author: gpx
	> Mail: 1457495424@qq.com
	> Created Time: 2019年01月01日 星期二 18时46分00秒
 ************************************************************************/

#ifndef _OPERATOR_H
#define _OPERATOR_H

class Operator {
    private :
        double m;
        double n;
        char op;
    public :
        void setValue(double a, double b);
        bool setOp(char op);
        bool result(double &r);
};

#endif
