/*
 * @Author: your name
 * @Date: 2021-09-15 17:11:06
 * @LastEditTime: 2021-09-15 17:15:24
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /WorkSpace/C/C基础/14.c
 */
#include <stdio.h>
int add(int a,int b){return a+b;}
int main(int argc, char const *argv[])
{
    int(*calculate)(int,int)=NULL;
    calculate = add;
    printf("calculate(1,2) = %d\n",calculate(1,2));
    printf("%d\n",(*calculate)(2,3));
    /* code */
    return 0;
}
