#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#define _CRT_SECURE_NO_WARNINGS

int main9()
{
	int a = 10;

	a = 1;
	printf("a=%d\n", a);//直接更改内存

	int *q = &a;
	printf("\n修改内存值前的地址：\n");
	printf("q=%p\n&a=%p\n", q, &a);
	printf("*q=%d\n", *q);

	*q = 1000;
	printf("\n\n\n\n修改内存值后的地址：\n");//地址是用来指示内存的，真正存储的是内存，所以无论如何修改数值，内存的地址都是不变的
	printf("q=%p\n&a=%p\n", q, &a);
	printf("*q=%d\n\n", *q);//间接打印内存


	system("pause");
	return 0;
}