#include <stdio.h>

int add(int x = 0);

int main(int argc, char const *argv[])
{
    printf("%d\n",add());
    printf("%d\n",add(2));
    return 0;
}

int add(int x)
{
    return 2*x;
}