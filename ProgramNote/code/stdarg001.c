/*******************************************************************
    > File Name: stdarg.c
    > Author: Larry Eppes
    > Mail: larryleifeng@163.com
    > Created Time: Sat 22 Apr 2017 05:10:24 PM CST
 *******************************************************************/

#include<stdio.h>
#include<stdarg.h>

void simple_va_fun(int start, ...){
	va_list arg_ptr; // 存储参数地址的指针
	int nArgValue = start;
	int nArgCount = 0; // 可变参数的数目
	va_start(arg_ptr, start); // 以固定参数的地址为起点确定
	// 变参的内存起始地址.
	do {
		++nArgCount;
		printf("the %d-th arg: %d\n", nArgCount, nArgValue);
		nArgValue = va_arg(arg_ptr, int); // 得到下一个可变参数的值
	} while(nArgValue != -1);
    va_end(arg_ptr);
	return;
}

int main(int argc, char* argv[]) {
	simple_va_fun(100, -1);
	simple_va_fun(100, 200, -1);
	return 0;
}
