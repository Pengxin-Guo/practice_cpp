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

typedef struct class_inherit {
    class_demo d;
    int c;
} class_inherit;

demo *demo_init(int i, int j) {
    class_demo *p = (class_demo *)malloc(sizeof(class_demo));
    if (p != NULL) {
        p->a = i;
        p->b = j;
    }
    return p;
}

int getA(demo *pthis) {
    class_demo *p = (class_demo *) pthis;
    return p->a;
}

int getB(demo *pthis) {
    class_demo *p = (class_demo *) pthis;
    return p->b;
}

int add(demo *pthis, int value) {
    class_demo *p = (class_demo *) pthis;
    return p->a + p->b + value;
}

void free_demo(demo *pthis) {
    free(pthis);
    return ;
}

inherit *inherit_init(int i, int j, int k) {
    class_inherit *p = (class_inherit *)malloc(sizeof(class_inherit));
    if (p != NULL) {
        p->d.a = i;
        p->d.b = j;
        p->c = k;
    }
    return p;
}

int getC(inherit *pthis) {
    class_inherit *p = (class_inherit *)pthis;
    return p->c;
}

int add1(inherit *pthis, int value) {
    class_inherit *p = (class_inherit *)pthis;
    return p->d.a + p->d.b + p->c + value;
}

void free_inherit(inherit *pthis) {
    free(pthis);
    return ;
}
