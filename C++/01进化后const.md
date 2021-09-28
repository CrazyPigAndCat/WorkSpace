<!--
 * @Author: your name
 * @Date: 2021-09-28 11:14:43
 * @LastEditTime: 2021-09-28 15:32:59
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /WorkSpace/C++/01进化后const.md
-->

# 进化后的const

### C语言中的const

- const修饰的变量是只读的，本质还是变量
- const修饰的局部变量在栈上分配空间
- const修饰的全局变量在只读存储区分配空间
- const只在编译期有用，在运行期无用

> const修饰变量不是真的常量，它只是告诉编译器该变量不能出现在赋值符号的左边

- C语言中的const使得变量具有只读属性
- const将具有全局生命周期的变量存储于只读存储区

### C++中的const

- C++在C的基础上对const进行了进化处理
  - 当碰见const声明时在符号表中进入常量
  - 编译过程中若发现使用常量则直接以符号表中的值替换
  - 编译过程中若发现下述情况则给对应的常量分配存储空间
    - 对const常量使用extern
    - 对const常量使用&操作符

> 注意：
> C++编译器虽然可能为const常量分配空间，但不会使用使用其存储空间中的值

## C与C++对比const

- C语言中的const变量
  - C语言中const变量是只读变量，会分配存储空间
- C++中的const常量
  - 可能分配存储空间
    - 当const常量为全局，并且需要在文件中使用
    - 当使用&操作符对const常量取值

