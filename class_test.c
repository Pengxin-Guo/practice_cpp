/*************************************************************************
	> File Name: class_test.c
	> Author: gpx
	> Mail: 1457495424@qq.com
	> Created Time: 2019年01月10日 星期四 20时35分17秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "class.h"

int main() {
    demo *p = demo_init(1, 2);
    printf("a = %d\n", getI(p));
    printf("b = %d\n", getJ(p));
    printf("add = %d\n", add(p, 5));
    return 0;
}
