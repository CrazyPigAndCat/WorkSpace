/*
 * @Author: your name
 * @Date: 2021-09-16 13:58:52
 * @LastEditTime: 2021-09-16 14:00:14
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /WorkSpace/C/C基础/16.c
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = 0,b = 1;
    int* p = &a;
    int** pp = &p;
    **pp = 2;

    return 0;
}
