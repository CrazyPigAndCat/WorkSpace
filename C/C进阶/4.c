/*
 * @Author: your name
 * @Date: 2021-09-22 11:19:56
 * @LastEditTime: 2021-09-22 11:34:09
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /WorkSpace/C/C进阶/4.c
 */
#include <stdio.h>
#define STRUCT(type) typedef struct _tag_##type type;struct _tag_##type
STRUCT(Student)
{
    char* name;
    int age;
};
int main(int argc, char const *argv[])
{
    Student s1;
    s1.name="name";
    s1.age=0;
    printf("s1.name = %s\n",s1.name);
    printf("s1.age = %d\n",s1.age);
    return 0;
}
