/*
 * @Author: your name
 * @Date: 2021-10-12 15:47:00
 * @LastEditTime: 2021-10-12 15:50:23
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /WorkSpace/C++/09类与对象/5.cpp
 */

#include <stdio.h>

class Test
{
private:
    /* data */
    int mi;
public:
    Test(int i)
    {
        mi = i;
    }
    Test()
    {
        Test(0);
    }
    ~Test();
    void print(){
        printf("mi = %d\n",mi);
    }
};

int main(int argc, char const *argv[])
{
    Test t;
    t.print();
    return 0;
}


