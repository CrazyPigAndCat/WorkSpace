/*
 * @Author: your name
 * @Date: 2021-09-15 14:46:11
 * @LastEditTime: 2021-09-15 15:07:26
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /WorkSpace/C/C基础/12.c
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[]={1,5,8,6,8};
    int *p = a;
    printf("%d,%d\n",a[0],*p);
    printf("%p,%p,%p\n",&a,p,&p);
    printf("%p\n","DT");
    printf("%p\n","DT");
    return 0;
}
