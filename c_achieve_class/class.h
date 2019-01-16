/*************************************************************************
	> File Name: class.h
	> Author: gpx
	> Mail: 1457495424@qq.com
	> Created Time: 2019年01月10日 星期四 20时28分46秒
 ************************************************************************/

#ifndef _CLASS_H
#define _CLASS_H

typedef void demo;
demo *demo_init(int i, int j);
int getI(demo *pthis);
int getJ(demo *pthis);
int add(demo *pthis, int value);
void free_demo(demo *pthis);

#endif
