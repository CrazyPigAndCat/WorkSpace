/*
 * @Author: your name
 * @Date: 2021-10-09 16:23:44
 * @LastEditTime: 2021-10-09 16:28:57
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /WorkSpace/C++/09类与对象/2.cpp
 */

#include <stdio.h>

class Test
{
private:
    int i;
    int j;
public:
    int getI(){return i;}
    int getJ(){return j;}
    void initialize(){i=1;j=2;};
};

Test gt;
int main(int argc, char const *argv[])
{
    gt.initialize();
    printf("gt.i = %d\n",gt.getI());
    printf("gt.j = %d\n",gt.getJ());

    Test t;
    t.initialize();
    printf("t.i = %d\n",t.getI());
    printf("t.j = %d\n",t.getJ());

    Test* pt = new Test;
    pt->initialize();
    printf("pt.i = %d\n",pt->getI());
    printf("pt.j = %d\n",pt->getJ());
    return 0;
}

