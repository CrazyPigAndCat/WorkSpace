/*
 * @Author: your name
 * @Date: 2021-10-08 14:04:49
 * @LastEditTime: 2021-10-08 14:07:15
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /WorkSpace/C++/06C++中的新成员/1.cpp
 */
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int* pi = new int(1);
    float* pf = new float(2.0);
    char* pc = new char('c');

    printf("*pi = %d\n",*pi);
    printf("*pf = %f\n",*pf);
    printf("*pc = %c\n",*pc);

    delete pi;
    delete pf;
    delete pc;

    return 0;
}
