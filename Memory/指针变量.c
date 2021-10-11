#include<stdio.h>
#include<stdlib.h>

int main3() {

	int a = 250;
	*(&a) = 38;//指针赋值
	printf("%d\n", a);


	int *q = NULL;
	q = &a;
	*q = 12;
	printf("%p\n", q);//这里是打印&a地址(%p打印地址)
	printf("%d\n", *q);


	system("pause");
	return 0;
}