/*******************************************************************
    > File Name: file.c
    > Author: Larry Eppes
    > Mail: larryleifeng@163.com
    > Created Time: Sat 22 Apr 2017 09:42:47 PM CST
 *******************************************************************/

#include<stdio.h>

int main(int argc, char** argv) {
	int A[3][3]={{11,12,13},{21,22,23},{31,32,33}};
	FILE *pf;
	// fopen(文件名, 打开方式)
	// 打开方式: r读, w写, +读写, t文本, b二进制
	// 返回指向文件的指针或NULL指针
	pf=fopen("data1.dat","wb");
	// fwrite(buffer, size, count, pf)
	// 将count个长度为size的连续数据写入pf指向的文件
	// buffer数据的首地址
	fwrite(A, sizeof(int),9,pf);
	// fwrite(A, sizeof(A),1,pf);
	// fclose关闭成功返回0, 否则非零
	fclose(pf);

	int B[3][3];
	pf=fopen("data1.dat","rb");
	// 从pf指向的文件中读取count个长度为size的连续数据
	// buffer是存放数据的首地址
	fread(B, sizeof(int), 9, pf);
	fclose(pf);
	return 0;
}
