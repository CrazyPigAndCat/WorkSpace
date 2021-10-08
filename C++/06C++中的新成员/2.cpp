/*
 * @Author: your name
 * @Date: 2021-10-08 14:17:16
 * @LastEditTime: 2021-10-08 14:23:07
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /WorkSpace/C++/06C++中的新成员/2.cpp
 */

#include <stdio.h>

namespace First
{
    int i = 0;
}

namespace Second
{
    namespace Internal
    {
        struct Q
        {
            int x;
            int y;
        };
        
    }
    int i = 1;
}

int main(int argc, char const *argv[])
{
    using namespace First;
    using namespace Second::Internal::Q;

    printf("First::i = %d\n",i);
    printf("Second::1 = %d\n",Second::i);
    Q p = {2,3};
    printf("p.x = %d\n",p.x);
    printf("p.y = %d\n",p.y);
    return 0;
}
