/*
 * @Author: your name
 * @Date: 2021-09-15 15:16:58
 * @LastEditTime: 2021-09-15 15:18:46
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /WorkSpace/C/C基础/13.c
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    char *c= NULL;
    c = "ChengZixaing";
    while(*c)
    {
        printf("%c",*c++);
    }
    printf("\n");
    return 0;
}
