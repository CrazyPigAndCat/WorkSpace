/*
 * @Author: your name
 * @Date: 2021-10-09 10:58:52
 * @LastEditTime: 2021-10-09 11:02:01
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /WorkSpace/C++/09类与对象/1.cpp
 */
#include <stdio.h>

int i = 1;
struct Test
{
    private:
        int i;
    public:
        int j;
        int getI()
        {
            i = 3;
            return i;
        }
};

int main(int argc, char const *argv[])
{
    int i =2;
    Test test;
    test.j  = 4;
    printf("i = %d\n",i);
    printf("::i = %d\n",::i);
    printf("test.j = %d\n",test.j);
    printf("test.getI() = %d\n",test.getI());
    return 0;
}
