/*************************************************************************
	> File Name: polymorphic.c
	> Author: gpx
	> Mail: 1457495424@qq.com
	> Created Time: 2019年01月16日 星期三 11时37分07秒
 ************************************************************************/

#include "polymorphic.h"
#include <stdlib.h>

// 结构体中存的是虚函数地址
typedef struct vtable {
    int (*padd)(void *, int);
} vtable;

typedef struct class_demo {
    vtable *vptr;
    int i;
    int j;
} class_demo;

typedef struct class_inherit {
    class_demo d;
    int k;
} class_inherit;

static int demo_virtual_add(demo *pthis, int val);
static int inherit_virtual_add(inherit *pthis, int val);

static vtable g_classdemo_vtr = {
    demo_virtual_add
};

static vtable g_classinherit_vtr = {
    inherit_virtual_add
};

demo *demo_init(int i, int j) {
    class_demo *p = (class_demo *)malloc(sizeof(class_demo));
    if (p != NULL) {
        p->vptr = &g_classdemo_vtr;
        p->i = i;
        p->j = j;
    }
    return p;
}

int getI(demo *pthis) {
    class_demo *p = (class_demo *)pthis;
    return p->i;
}

int getJ(demo *pthis) {
    class_demo *p = (class_demo *)pthis;
    return p->j;
}

static int demo_virtual_add(demo *pthis, int val) {
    class_demo *p = (class_demo *)pthis;
    return p->i + p->j + val;
}

int demo_add(demo *pthis, int val) {
    class_demo *p = (class_demo *)pthis;
    return p->vptr->padd(pthis, val);
}

void free_demo(demo *pthis) {
    free(pthis);
    return ;
}

inherit *inherit_init(int i, int j, int k) {
    class_inherit *p = (class_inherit *)malloc(sizeof(class_inherit));
    if (p != NULL) {
        p->d.vptr = &g_classinherit_vtr;
        p->d.i = i;
        p->d.j = j;
        p->k = k;
    }
    return p;
}

int getK(inherit *pthis) {
    class_inherit *p = (class_inherit *)pthis;
    return p->k;
}

static int inherit_virtual_add(inherit *pthis, int val) {
    class_inherit *p = (class_inherit *)pthis;
    return p->d.i + p->d.j + p->k + val;
}

int inherit_add(inherit *pthis, int val) {
    class_inherit *p = (class_inherit *)pthis;
    return p->d.vptr->padd(pthis, val);
}

void free_inherit(inherit *pthis) {
    free(pthis);
    return ;
}
