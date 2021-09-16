/*
 * @Author: your name
 * @Date: 2021-08-17 09:23:40
 * @LastEditTime: 2021-08-19 15:04:19
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /WorkSpace/C/C基础/5/1.c
 */
#include <stdio.h>
int main(){
    int a = 50000;
    short b = 0;
    printf("a = %d, b = %d\n",a,b);
    b = a;
    printf("a = %d, b = %d\n",a,b);

    int c = 0;
    float d = 3.1415926f;
    printf("c = %d, d = %f\n",c,d);
    c = d;
    printf("c = %d, d = %f\n",c,d);
    return 0;
}