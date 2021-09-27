<!--
 * @Author: your name
 * @Date: 2021-09-22 09:21:52
 * @LastEditTime: 2021-09-22 10:19:35
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /WorkSpace/C/C进阶/04.md
-->
# #pragma使用

### #pragma简介
- #pragma用于指示编译器完成一些特定的动作
- #pragma所定义的很多指示字是编译器持有的
- #pragma在不同编译器间是不可移植的
  - 预处理器将忽略它不认识的#pragma指令
  - 不同的编译器可能以不同的方式解释同一条#pragma指令
```C
//一般用法：
#pragma parameter
//不同的parameter参数语法和意义各不相同
```
#### #pragma message参数
> - message参数在大多数的编译器中都有相似的实现
> - message参数在编译时输出消息到编译输出窗口中
> - message用于条件编译可提示代码版本的信息
```C
#if defined(ANDROID20)
    #pragma message("Compile Android SDK 2.0....")
    #define VERSION "Android 2.0"
#endif
```

#### #pragma once参数
> - 用于保证头文件只被编译一次
> - 是编译器相关不一定被支持

#### #pragma pack参数

> 什么是内存对齐？
> - 不同类型的数据在内存中按照一定的规则排列
> - 而不一定是顺序的一个接着一个的排列
>
> 为什么需要内存对齐？
> - CPU对内存的读取不是连续的，而是分成块读取的，块的大小只能1、2、4、8....字节
> - 当读取操作的数据未对齐，则需要两次总线周期来访问内存，因此性能大打折扣
> - 某些硬件平台只能规定的相对地址处读取特定类型数据，否则产生硬件异常

#####  #pragma pack用于指定内存对齐

> Struct占用的内存大小
> - 第一个成员起始于0偏移量
> - 每个成员按其类型大小和pack参数中较小的一个进行对齐
>   - 偏移地址必须能被对齐参数整除
>   - 结构体成员的大小取其内部长度最大的数据成员作为其大小
> - 结构体总长度必须为所有对齐参数的整数倍
> <b>编译器在默认情况下按照4字节对齐</b>
>
