/*
 * @Author: your name
 * @Date: 2021-09-23 09:51:31
 * @LastEditTime: 2021-09-23 10:01:58
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /WorkSpace/C/C进阶/5.c
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    char a = "abc"[0];
    char b = *("123"+1);
    char c = *"";
    printf("%c\n",a);
    printf("%c\n",b);
    printf("%d\n",c);

    printf("%s\n","Hello");
    printf("%p","World");
    return 0;
}
