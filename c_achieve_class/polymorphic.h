/*************************************************************************
	> File Name: polymorphic.h
	> Author: gpx
	> Mail: 1457495424@qq.com
	> Created Time: 2019年01月16日 星期三 11时37分00秒
 ************************************************************************/

#ifndef _POLYMORPHIC_H
#define _POLYMORPHIC_H

typedef void demo;
typedef void inherit;

demo *demo_init(int i, int j);
int getI(demo *pthis);
int getJ(demo *pthis);
int demo_add(demo *pthis, int val);
void free_demo(demo *pthis);

inherit *inherit_init(int i, int j, int k);
int getK(inherit *pthis);
int inherit_add(inherit *pthis, int val);
void free_inherit(inherit *pthis);

#endif
