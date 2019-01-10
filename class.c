/*************************************************************************
	> File Name: class.c
	> Author: gpx
	> Mail: 1457495424@qq.com
	> Created Time: 2019年01月10日 星期四 20时28分35秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "class.h"

typedef struct class_demo {
    int a;
    int b;
} class_demo;

demo *demo_init(int i, int j) {
    class_demo *p = (class_demo *)malloc(sizeof(class_demo));
    if (p != NULL) {
        p->a = i;
        p->b = j;
    }
    return p;
}

int getI(demo *pthis) {
    class_demo *p = (class_demo *) pthis;
    return p->a;
}

int getJ(demo *pthis) {
    class_demo *p = (class_demo *) pthis;
    return p->b;
}

int add(demo *pthis, int value) {
    class_demo *p = (class_demo *) pthis;
    return p->a + p->b + value;
}

void free_demo(demo *pthis) {
    free(pthis);
}

