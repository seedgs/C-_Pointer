#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int a = 10;//以a这个变量名所对应的内存空间中放一个10
	int b[10];//int 类型的数组

	printf("sizeof(a)：%d个字节\n",sizeof(a));//a变量的大小为4个字节
	printf("sizeof(int *)：%d个字节\n", sizeof(int *));//32位系统下，所有类型的指针都为4字节；64位系统下，所有类型的指针为8个字节
	printf("sizeof(char *)：%d个字节\n", sizeof(char *));//32位系统下，所有类型的指针都为4字节；64位系统下，所有类型的指针为8个字节
	printf("sizeof(double *)：%d个字节\n", sizeof(double *));//32位系统下，所有类型的指针都为4字节；64位系统下，所有类型的指针为8个字节
	printf("sizeof(b[0])：%d个字节\n", sizeof(b[0]));//b数组第一个元素大小为4个字节
	printf("sizeof(b)：%d个字节\n", sizeof(b));//b数组大小为40个字节，因为中括号内为10，代表10个元素，每个元素4个字节，共40个字节
	printf("sizeof(*b)：%d个字节\n", sizeof(*b)); //32位系统下，所有类型的指针都为4字节；64位系统下，所有类型的指针为8个字节

	system("pause");
	return 0;
}