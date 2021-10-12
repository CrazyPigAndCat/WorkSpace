/*
 * @Author: your name
 * @Date: 2021-10-09 14:41:02
 * @LastEditTime: 2021-10-09 16:06:32
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /WorkSpace/C++/09类与对象/类的使用/main.cpp
 */

#include <stdio.h>
#include "Operator.cpp"

int main(int argc, char const *argv[])
{
    Operator op;
    double r;
    op.setOperator('/');
    op.setParameter(9,3);
    if(op.result(r))
    {
        printf("%f\n",r);
    }
    else
    {
        printf("出现错误！");
    }
    return 0;
}
