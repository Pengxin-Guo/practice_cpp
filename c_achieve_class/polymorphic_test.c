/*************************************************************************
	> File Name: polymorphic_test.c
	> Author: gpx
	> Mail: 1457495424@qq.com
	> Created Time: 2019年01月16日 星期三 11时37分13秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "polymorphic.h"

void how_to_select(demo *p, int v) {
    int r = demo_add(p, v);
    printf("res = %d\n", r);
}

int main() {
    demo *pb = demo_init(1, 2);
    inherit *pd = inherit_init(1, 2, 3);
    printf("i = %d\n", getI(pb));
    printf("j = %d\n", getJ(pb));
    printf("add = %d\n", demo_add(pb, 5));
    printf("i = %d\n", getI(pd));
    printf("j = %d\n", getJ(pd));
    printf("k = %d\n", getK(pd));
    printf("add = %d\n", inherit_add(pd, 5));
    how_to_select(pb, 1);
    how_to_select(pd, 2);
    free_demo(pb);
    free_inherit(pd);
    return 0;
}
