/*
 * @Author: your name
 * @Date: 2021-08-27 10:21:56
 * @LastEditTime: 2021-08-27 10:27:27
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /WorkSpace/C/C基础/4.c
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    short a=2,b=2;
    char c;
    scanf("input %c",&c);
    switch(c){
        case '-':
            printf("%d - %d = %d",a,b,a-b);
            break;
        case '+':
            printf("%d + %d = %d",a,b,a+b);
            break;
        default:
            printf("error");
    }
    return 0;
}
