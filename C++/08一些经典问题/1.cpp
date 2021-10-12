/*
 * @Author: your name
 * @Date: 2021-10-08 16:49:27
 * @LastEditTime: 2021-10-08 16:58:56
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /WorkSpace/C++/08一些经典问题/1.cpp
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    const int x = 1;
    const int& rx = x;
    int& nrx = const_cast<int&>(rx);

    nrx = 5;

    printf("x = %d\n",x);
    printf("rx = %d\n",rx);
    printf("nrx = %d\n",nrx);
    printf("&x = %p\n",&x);
    printf("&rx = %p\n",&rx);
    printf("&nrx = %p\n",&nrx);

    volatile const int y = 2;
    int* p = const_cast<int*>(&y);
    *p = 6;
    printf("y = %d\n",y);
    printf("p = %p\n",p);
    return 0;
}
