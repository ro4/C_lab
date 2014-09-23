/**
 * slabs头文件 
 * 参考了memcached源码
 */
#ifndef SLABS_H
#define SLABS_H

void slabs_init(); /*初始化函数*/
void *slabs_alloc(); /*内存申请*/
void *slabs_free(); /*释放内存*/

#endif
