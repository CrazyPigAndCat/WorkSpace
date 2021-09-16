/*
 * @Author: your name
 * @Date: 2021-09-16 14:15:03
 * @LastEditTime: 2021-09-16 14:16:09
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /WorkSpace/C/C基础/17.c
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[2][2] = {{1,2},{3}};
    int (*pa)[2] = a;
    
    return 0;
}
