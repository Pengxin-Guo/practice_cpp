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
    demo *d = demo_init(1, 2);
    printf("a = %d\n", getA(d));
    printf("b = %d\n", getB(d));
    printf("add = %d\n", add(d, 5));
    free_demo(d);
    inherit *d1 = inherit_init(1, 2, 3);
    printf("a = %d\n", getA(d1));
    printf("b = %d\n", getB(d1));
    printf("c = %d\n", getC(d1));
    printf("add1 = %d\n", add1(d1, 5));
    free_inherit(d1);
    return 0;
}
