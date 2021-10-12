#include<stdio.h>
#include<stdlib.h>

void main6()
{
	int pin_1 = 'a';
	int* q = NULL;
	q = &pin_1;
	//也可以写成 （int* q = &pin）

	pin_1 = 'c';
	
	pin_1 = 'z';

	printf("指针变量的地址(写法1)：%p\n\n",q);//指针变量的地址(写法1),指针变量地址储存变量的地址与变量的值
	printf("指针变量的地址(写法2)：%p\n\n", &pin_1);//指针变量的地址(写法2)，指针变量地址储存变量的地址与变量的值


	printf("指针变量的值：%c\n\n", *q);//指针变量的值
	printf("变量的值：%c\n\n", pin_1);//变量的值


	printf("变量的地址：%p\n\n",pin_1);//变量的地址


	printf("二级指针的地址：%p\n\n", &q);//二级指针的地址,储存一级指针的地址(也就是存储指针变量的地址)




	system("pause");
	return 0;
}