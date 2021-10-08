#include <stdio.h>

#define FUNC(a,b) ((a)<(b)>(a):(b))

inline int func(int a,int b)
{
    return a<b?a:b;
}
int main(int argc, char const *argv[])
{
    int a = 1;
    int b = 3;
    int c = FUNC(++a,b);
    printf("a = %d\n",a);
    a = 1;
    int d = func(++a,b);
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    printf("c = %d\n",c);
    printf("d = %d\n",d);
    return 0;
}
