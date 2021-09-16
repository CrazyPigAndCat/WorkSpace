/*
 * @Author: your name
 * @Date: 2021-09-16 11:11:50
 * @LastEditTime: 2021-09-16 11:13:07
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /WorkSpace/C/C基础/15.c
 */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int *p = malloc(2*sizeof(int));
    if (p != NULL)
    {
        *p = 1;
        *(p+1) = 2;
    }
    
    return 0;
}
