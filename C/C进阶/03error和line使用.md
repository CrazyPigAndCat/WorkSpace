<!--
 * @Author: your name
 * @Date: 2021-09-18 17:37:09
 * @LastEditTime: 2021-09-18 18:09:42
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /WorkSpace/C/C进阶/03error和line使用.md
-->
<!--
 *                                |~~~~~~~|
 *                                |       |
 *                                |       |
 *                                |       |
 *                                |       |
 *                                |       |
 *     |~.\\\_\~~~~~~~~~~~~~~xx~~~         ~~~~~~~~~~~~~~~~~~~~~/_//;~|
 *     |  \  o \_         ,XXXXX),                         _..-~ o /  |
 *     |    ~~\  ~-.     XXXXX`)))),                 _.--~~   .-~~~   |
 *      ~~~~~~~`\   ~\~~~XXX' _/ ';))     |~~~~~~..-~     _.-~ ~~~~~~~
 *               `\   ~~--`_\~\, ;;;\)__.---.~~~      _.-~
 *                 ~-.       `:;;/;; \          _..-~~
 *                    ~-._      `''        /-~-~
 *                        `\              /  /
 *                          |         ,   | |
 *                           |  '        /  |
 *                            \/;          |
 *                             ;;          |
 *                             `;   .       |
 *                             |~~~-----.....|
 *                            | \             \
 *                           | /\~~--...__    |
 *                           (|  `\       __-\|
 *                           ||    \_   /~    |
 *                           |)     \~-'      |
 *                            |      | \      '
 *                            |      |  \    :
 *                             \     |  |    |
 *                              |    )  (    )
 *                               \  /;  /\  |
 *                               |    |/   |
 *                               |    |   |
 *                                \  .'  ||
 *                                |  |  | |
 *                                (  | |  |
 *                                |   \ \ |
 *                                || o `.)|
 *                                |`\\) |
 *                                |       |
 *                                |       |
 -->

# #error和#line使用

### #error的使用

- #error用于生成一个编译错误消息
- 用法

```C
#error message
//message不需要用双引号包围
```

- #error编译指示字用于自定义程序员特有的编译错误消息类似于，#warning用于生成编译警告
- #error是一种预编译器指示字
- #error可用于提示编译条件是否满足

```C
#ifnedf _cplusplus
    #error This file should be processed with C++ compiler
#endif
```

### #line的使用

- #line用于强制指定新的行号和编译文件名，并对源程序的代码重新标号

```C
//用法
#line number filename
    //filename 可省略
```

- #line编译指示字的本质是重定义 _LINE_ 和 _FILE_
