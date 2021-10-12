/*
 * @Author: your name
 * @Date: 2021-10-12 15:28:55
 * @LastEditTime: 2021-10-12 15:30:16
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /WorkSpace/C++/09类与对象/4.cpp
 */

#include <stdio.h>

class Test
{
private:
    
public:
    Test()
    {
        printf("Test()\n");
    }
    ~Test()
    {
        printf("~Test()\n");
    }
};

int main(int argc, char const *argv[])
{
    Test t;
    return 0;
}

