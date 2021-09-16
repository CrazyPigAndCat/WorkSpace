/*
 * @Author: your name
 * @Date: 2021-09-02 16:12:17
 * @LastEditTime: 2021-09-03 09:57:36
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /WorkSpace/C/C基础/8.c
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[] = {1,5,16,456,631};
    printf("length = %ld",sizeof(arr)/sizeof(arr[0]));
    return 0;
}
