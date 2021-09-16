/*
 * @Author: your name
 * @Date: 2021-09-13 09:26:22
 * @LastEditTime: 2021-09-13 09:27:48
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /WorkSpace/C/C基础/11.c
 */
#include <stdio.h>
#define MAX(a,b) (a>b?a:b)
int main(int argc, char const *argv[])
{
    int a = 1,b = 2 ,c = 3;
    printf("MAX = %d" ,MAX(a,MAX(b,c)));
    return 0;
}
