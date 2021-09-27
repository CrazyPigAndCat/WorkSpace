/*
 * @Author: your name
 * @Date: 2021-09-23 10:27:13
 * @LastEditTime: 2021-09-23 10:28:34
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /WorkSpace/C/C进阶/6.c
 */

#include <stdio.h>
#include <string.h>
#define STR "Hello, \0CZX\0"
int main(int argc, char const *argv[])
{
    char *src = STR;
    char buf[255] = {0};
    snprintf(buf,sizeof(buf),src);
    printf("strlen(STR) = %ld\n",strlen(STR));
    printf("sizeof(STR) = %ld\n",sizeof(STR));
    printf("src = %s\n",src);
    printf("buf = %s\n",buf);
    return 0;
}
