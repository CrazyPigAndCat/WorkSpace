/*
 * @Author: your name
 * @Date: 2021-09-22 09:52:26
 * @LastEditTime: 2021-09-22 10:40:06
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /WorkSpace/C/C进阶/3.c
 */
#include <stdio.h>
#define PRINTF(x) #x
int main(int argc, char const *argv[])
{
    printf("%s\n",PRINTF(Hello World!!!));
    return 0;
}
