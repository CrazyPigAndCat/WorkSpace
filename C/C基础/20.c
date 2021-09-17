/*
 * @Author: your name
 * @Date: 2021-09-16 17:25:58
 * @LastEditTime: 2021-09-16 17:32:40
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /WorkSpace/C/C基础/20.c
 */
#include <stdio.h>
union UTest
{
    int a;
    float b;
};
int main(int argc, char const *argv[])
{
    union UTest ut = {987654321};
    printf("Union UTest size = %ld\n",sizeof(union UTest));
    printf("&ut.a = %p\n",&ut.a);
    printf("&ut.b = %p\n",&ut.b);   
    printf("ut.a = %d\n",ut.a);
    printf("ut.b = %f\n",ut.b);
    printf("\n");
    printf("Update ut.f \n");
    ut.b = 987654321.0f;
    printf("ut.a = %d\n",ut.a);
    printf("ut.b = %f\n",ut.b);
    return 0;
}
