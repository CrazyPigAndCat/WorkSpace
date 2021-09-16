/*
 * @Author: your name
 * @Date: 2021-08-27 09:56:42
 * @LastEditTime: 2021-08-30 10:10:27
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /WorkSpace/C/C基础/3.c
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    short a=1,b=2;
    short c = a - b;
    if(c>0){
        printf("a>b\n");
    }else if(c<0){
        printf("a<b\n");
    }else{    
        printf("a=b\n");
    }
    return 0;
}

