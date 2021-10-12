/*
 * @Author: your name
 * @Date: 2021-10-08 09:39:09
 * @LastEditTime: 2021-10-08 09:45:30
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /WorkSpace/C++/05函数参数与重载/2.cpp
 */

#include <stdio.h>

int func(int a ,int b,int c)
{
    return a*b*c;
}
int func(int a,int b)
{
    return a+b;
}

int main(int argc, char const *argv[])
{
    printf("%d\n",func(1,2));
    return 0;
}