/*
 * @Author: your name
 * @Date: 2021-09-26 18:00:52
 * @LastEditTime: 2021-09-26 18:03:16
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /WorkSpace/C/C进阶/9.c
 */
#include <stdio.h>
#include <stdarg.h>

float average(int n,...)
{
    va_list args;
    int i = 0;
    float sum = 0;
    va_start(args,n);
    for (size_t i = 0; i < n; i++)
    {
        sum += va_arg(args,int);
    }
    va_end(args);
    return sum/n;
}
int main(int argc, char const *argv[])
{
    printf("%f\n",average(4,1,2,3,4));
    return 0;
}
