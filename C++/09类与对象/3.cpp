/*
 * @Author: your name
 * @Date: 2021-10-12 10:34:27
 * @LastEditTime: 2021-10-12 10:35:37
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /WorkSpace/C++/09类与对象/3.cpp
 */

#include <stdio.h>

class Test
{
private:
    const int i;
public:
    Test():i(10)
    {

    }
    int getI(){
        return i;
    }
};

int main(int argc, char const *argv[])
{
    Test test;
    printf("test.i = %d\n",test.getI());
    return 0;
}
