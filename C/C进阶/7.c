/*
 * @Author: your name
 * @Date: 2021-09-23 15:37:28
 * @LastEditTime: 2021-09-23 15:41:08
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /WorkSpace/C/C进阶/7.c
 */
# include <stdio.h>
#ifndef __GNUC__
#define __attribute__(x)
#endif
__attribute__((constructor))
void befine_main()
{
    printf("%s\n",__FUNCTION__);
}

__attribute__((destructor))
void after_main()
{
    printf("%s\n",__FUNCTION__);
}
int main(int argc, char const *argv[])
{
    printf("%s\n",__FUNCTION__);
    return 0;
}
