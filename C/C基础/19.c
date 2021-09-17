/*
 * @Author: your name
 * @Date: 2021-09-16 16:28:45
 * @LastEditTime: 2021-09-16 16:35:11
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /WorkSpace/C/C基础/19.c
 */
#include <stdio.h>
#include <string.h>
struct Test;
struct Test* g_pt;//只要有类型声明就可以创建指针
struct Test 
{
    int a;
    int b;
};

int main(int argc, char const *argv[])
{
    struct Test t;//必须要给出完整定义才能创建相应类型变量
    t.a = 1;
    t.b = 2;
    g_pt = &t;
    printf("&g_pt = %p\n",g_pt);
    printf("g_py->a = %d\n",g_pt->a);
    return 0;
}



