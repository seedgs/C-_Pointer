#include<stdio.h>
#include<stdlib.h>

int main2()
{
	int loser = 228;
	printf("%p\n", &loser);

	int *p = &loser;//声明和赋值二合一
	*p = 1030;//*ha号就是通过账号ID查找内存，进行操控


	//指针声明必须初始化  如果没有值的话就初始化为NULL
	int *pa = NULL;//这里是声明
	pa = &loser;//这里是赋值
	*pa = 2500;


	printf("%d\n", loser);
	system("pause");
	return 0;
}