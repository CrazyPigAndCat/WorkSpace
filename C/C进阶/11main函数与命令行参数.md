<!--
 * @Author: your name
 * @Date: 2021-09-23 11:35:04
 * @LastEditTime: 2021-09-23 15:47:20
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /WorkSpace/C/C进阶/11main函数与命令行参数.md
-->

# main函数与命令行参数

### main函数的概念

- C语言中main函数称为主函数
- 一个C程序是从main函数开始执行

### main函数的本质

- main函数是操作系统调用的函数
- 操作系统总是将main函数作为应用程序的开始
- 操作系统将main函数的返回值作为程序退出状态
- 程序执行时可以向main函数传递参数
  - ``` int main(int argc,char *argv[],char *env[]) ```
  - argc-命令行参数个数
  - argv-命令行参数数组
  - env-环境变量数组


### 问题：C必须第一个执行main函数吗？

```C
# include <stdio.h>
#ifndef __GNUC__
#define __attribute__(x)
#endif
__attribute__((constructor))
void befine_main()
{
    printf("%s\n",__FUNCTION__);
}

__attribute__((destructor))
void after_main()
{
    printf("%s\n",__FUNCTION__);
}
int main(int argc, char const *argv[])
{
    printf("%s\n",__FUNCTION__);
    return 0;
}
```

### 小结

- 一个C程序是从main函数开始执行
- main函数时操作系统调用的函数
- main函数由参数和返回值
- 现代编译器支持在main函数之前调用其他函数
