#include <stdio.h>

struct TRef
{
    char* defore;
    char& ref;
    char* after;
};


int main(int argc, char const *argv[])
{
    char a = 'a';
    char& b = a;
    char c = 'c';
    TRef r = {&a,b,&c};
    printf("sizeof(r) = %d\n",sizeof(r));
    printf("sizeof(r.defore) = %d\n",sizeof(r.defore));
    printf("sizeof(r.after) = %d\n",sizeof(r.after));
    printf("&r.defore = %p\n",&r.defore);
    printf("&r.after = %p\n",&r.after);
    return 0;
}
