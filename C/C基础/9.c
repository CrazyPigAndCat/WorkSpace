/*
 * @Author: your name
 * @Date: 2021-09-07 10:55:24
 * @LastEditTime: 2021-09-07 13:39:25
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /WorkSpace/C/C基础/9.c
 */
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char s[10] = "adc";
    int size = sizeof(s);
    int l = strlen(s);
    printf("size = %d\n",size);
    printf("len = %d\n",l); 

    char s1[10] = "a123";
    char s2[10] = "b456";
    strcpy(s1,s2);//s1 = s2
    printf("strcpy(s1,s2) = %s\n",s1);
    strcat(s1,s2);//s1 = s1+s2
    printf("strcat(s1,s2) = %s\n",s1);
    int lens1 = strlen(s1);
    printf("strlen(s1) = %d \n",lens1);
    return 0;
}

