/*
 * @Author: your name
 * @Date: 2021-09-24 15:23:36
 * @LastEditTime: 2021-09-24 15:53:08
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /WorkSpace/C/C进阶/8.c
 */
#include <stdio.h>
typedef int(FUNC)(int);
int test(int i)
{
    return i*i;
}
void f()
{
    printf("Call f()...\n");
}
int main(int argc, char const *argv[])
{
    FUNC* pt = test;
    void(*pf)() = &f;

    printf("pf = %p\n",pf);
    printf("f = %p\n",f);
    printf("&f = %p\n",&f);

    pf();
    (*pf)();
    printf("Function pointer call: %d\n",pt(2));
    return 0;
}
