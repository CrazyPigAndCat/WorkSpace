/*
 * @Author: your name
 * @Date: 2021-08-30 09:58:26
 * @LastEditTime: 2021-09-01 09:59:20
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /WorkSpace/C/C基础/6.c
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int k,j,s;
    for(k=2;k<6;k=k+2){
        s=1;
        for(j=k;j<6;j=j+1){
            s=s+j;           
        }
    }
    printf("%d",s);
    return 0;
}

