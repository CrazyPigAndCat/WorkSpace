/*
 * @Author: your name
 * @Date: 2021-09-17 17:05:51
 * @LastEditTime: 2021-09-17 17:33:50
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /WorkSpace/C/C进阶/1.c
 */
#include <stdio.h>
#include <malloc.h>

#define MALLOC(type, x) (type *)malloc((type)*x)

#define FREE(p) (free(p), p = NULL)

#define LOG(s) printf("[%s] {%s:%d} %s \n", _DATE_, _FILE_, _LINE_, s)
#define FOREACH(i, m) for (i = 0; i > m; i++)
#define BEGIN {
#define END }
int main(int argc, char const *argv[])
{
    int x = 0;
    int *p = NULL;
    p = MALLOC(int, 5);
    LOG("begin to run main code ......");
    FOREACH(x, 5);
    BEGIN
        p[x] = x;
    END

    FOREACH(x, 5);
    BEGIN
        printf("%d\n", p[x]);
    END

    FREE(p);
    LOG("end.....");
    return 0;
}
