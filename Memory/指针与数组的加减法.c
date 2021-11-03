#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#define _CRT_SECURE_NO_WARNINGS

int main13()
{
	//指针的类型不单单是决定了步长还决定了解析方式
	//指针的类型决定了往前走几个字节

	int num = 10;//int数据类型大小是4个字节
	int* p = &num;//指针是4个字节   指针加1是加了一个指针所指向类型的大小

	//既然什么类型的指针都是4个字节，那么为什么要有类型呢？ void *p

	printf("%d\n%d\n",p,p+1); // 4

	char str = "h";//char数据类型大小是1个字节
	char* pstr = &str;
	//计算机编译器内运算：pstr + sizeo（*pstr） * 1
	printf("%d\n%d\n", pstr, pstr + 1);

	system("pause");
	return 0;
}