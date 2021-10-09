/*
 * @Author: your name
 * @Date: 2021-10-09 14:14:19
 * @LastEditTime: 2021-10-09 14:45:38
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /WorkSpace/C++/09类与对象/类的使用/Operator.h
 */

#ifndef _OPERATOR_H_
#define _OPERATOR_H_

class Operator
{
private:
    char m0p;
    double mP1;
    double mP2;
public:
    bool setOperator(char op);
    void setParameter(double p1,double p2);
    bool result(double& r);
};

#endif