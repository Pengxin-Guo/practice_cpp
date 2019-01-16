/*************************************************************************
	> File Name: xiache.cpp
	> Author: gpx
	> Mail: 1457495424@qq.com
	> Created Time: 2019年01月16日 星期三 09时54分03秒
 ************************************************************************/

#include <iostream>
using namespace std;

class CompanyA_Boss {
    public:
    int battle() {
        int ret = 10;
        cout << "CompanyA_Boss::battle = " << ret << endl;
        return ret;
    }
};

class CompanyB_Boss {
    public:
    virtual int fight() {
        int ret = 8;
        cout << "CompanyB_Boss::fight = " << ret << endl;
        return ret;
    }
};

class CompanyB_NewBoss : public CompanyB_Boss {
    public:
    int fight() {
        int ret = CompanyB_Boss::fight() * 2;
        cout << "CompanyB_NewBoss::fight = " << ret << endl;
        return ret;
    }
};

void vs(CompanyA_Boss *c1, CompanyB_Boss *c2) {
    int a = c1->battle();
    int b = c2->fight();
    if (a > b) {
        cout << "Company A is winner" << endl;
    } else {
        cout << "Company B is winner" << endl;
    }
}

int main() {
    cout << "one year ago" << endl;
    CompanyA_Boss c1;
    CompanyB_Boss c2;
    vs(&c1, &c2);
    cout << "CompanyB_Boss died" << endl;
    cout << "one year later" << endl;
    CompanyB_NewBoss nb;
    vs(&c1, &nb);
    return 0;
}
