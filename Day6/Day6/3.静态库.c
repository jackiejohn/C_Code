#include<stdio.h>
#include<stdlib.h>
#include "test.h"

/*
	生成静态库:
		1.在头文件中声明一个函数,然后通过源文件实现该函数,再生成为lib文件
		2.将生成的头文件和lib文件复制到所需要使用的工程目录下,添加头文件,然后在链接器的输入里面添加该lib文件即可.
		3.C语言即使没有声明导入头文件,只有要库文件,它就会去自动匹配,但是不能没有库文件.
	
	总结C语言的编译链接过程:
		1.编译过程只是检查该函数有无声明,真正的函数实现会在链接过程中去检查.
*/
int add(int a, int b) {
	return a + b;
}