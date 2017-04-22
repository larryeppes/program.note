/*******************************************************************
    > File Name: va_end.c
    > Author: Larry Eppes
    > Mail: larryleifeng@163.com
    > Created Time: Sat 22 Apr 2017 07:01:23 PM CST
 *******************************************************************/

#include<stdio.h>
#include<stdarg.h>
void PrintLines(char* first, ...) {
	char* str;
	va_list vl;
	
	str=first;
	va_start(vl, first);

	do{
		puts(str);
		str=va_arg(vl, char*);
	}while(str != NULL);

	va_end(vl);
}

int main() {
	PrintLines("First", "Second", "Third", "Fourth", NULL);
	return 0;
}
