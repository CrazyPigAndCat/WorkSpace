/*
 * @Author: your name
 * @Date: 2021-09-15 17:11:06
 * @LastEditTime: 2021-09-15 17:28:54
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /WorkSpace/C/C基础/14.c
 */
#include <stdio.h>
int add(int a,int b)
{
    return a+b;
}
int calculate(int a[],int len,int(*cal)(int,int))
{
    int number=a[0];
    int i=0;
    for(i=1;i<len;i++)
    {
        number=cal(number,a[i]);
    }
    return number;
}
int main(int argc, char const *argv[])
{
    int a[] = {1,2,3,4,5,6,7,8,9};
    printf("1+2+....+9=%d\n",calculate(a,9,add));
    return 0;
}
