/*
 * @Author: your name
 * @Date: 2021-09-16 14:53:27
 * @LastEditTime: 2021-09-16 14:59:16
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit#
 * @FilePath: /WorkSpace/C/C基础/18.c
 */
#include <stdio.h>

typedef float(FArr5)[5];
typedef int(IntFun)(int,int);
float g_farr[5]={1.1,2.3,0.3,5.1,6.9};
int add(int a,int b)
{
    return a+b;
}
int main(int argc, char const *argv[])
{
    FArr5 *f = &g_farr;
    IntFun *fun = add;
    for (size_t i = 0; i < 5; i++)
    {
        printf("%f ",(*f)[i]);
    }
    printf("\n");
    printf("Add = %d",add(2,3));
    return 0;
}
