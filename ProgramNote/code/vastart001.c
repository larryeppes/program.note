/*******************************************************************
    > File Name: va_start.c
    > Author: Larry Eppes
    > Mail: larryleifeng@163.com
    > Created Time: Sat 22 Apr 2017 06:47:09 PM CST
 *******************************************************************/

#include<stdio.h>
#include<stdarg.h>

void PrintFloats(int n, ...) {
	int i;
	double val;
	printf("Printing floats:");
	va_list vl;
	va_start(vl, n);
	for (i=0;i<n;i++){
		val=va_arg(vl,double);
		printf(" [%.2f]",val);
	}
	va_end(vl);
	printf("\n");
}

int main() {
	PrintFloats(3,3.14159,2.71828,1.41421);
	return 0;
}
