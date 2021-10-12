/*
 * @Author: your name
 * @Date: 2021-10-08 09:55:34
 * @LastEditTime: 2021-10-08 10:00:00
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /WorkSpace/C++/05函数参数与重载/3.cpp
 */

#include <stdio.h>

int add(int a,int b)
{
    return a+b;
}
int add(int a,int b, int c)
{
    return a+b+c;
}
int main(int argc, char const *argv[])
{
    printf("%p\n",(int(*)(int,int))add);
    printf("%p\n",(int(*)(int,int,int))add);
    return 0;
}
