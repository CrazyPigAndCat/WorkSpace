/*
 * @Author: your name
 * @Date: 2021-10-09 14:17:06
 * @LastEditTime: 2021-10-09 14:59:38
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /WorkSpace/C++/09类与对象/类的使用/Operator.cpp
 */
#include "Operator.h"

bool Operator::setOperator(char op)
{
    bool ret = false;
    if( (op == '+')||(op == '-')||(op == '*')||(op == '/') )
    {
        ret = true;
        m0p = op;
    }
    else
    {
        m0p = '\0';
    }
    return ret;
}

void Operator::setParameter(double p1,double p2)
{
    mP1 = p1;
    mP2 = p2;
}

bool Operator::result(double& r)
{
    bool ret = true;
    switch (m0p)
    {
    case '/' :
        if( (-0.000000001<mP2)&&(mP2<0.00000001) )
        {
            ret = false;
        }
        else
        {
            r = mP1 / mP2;
        }
        break;
    case '+':
        r = mP1 + mP2;
        break;
    case '*':
        r = mP1 * mP2;
        break;
    case '-':
        r = mP1 - mP2;
        break;
    default:
        ret = false;
        break;
    }
    return ret;
}
