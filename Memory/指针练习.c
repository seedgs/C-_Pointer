#include<stdio.h>
#include<stdlib.h>

void main4() 
{
	int address = 'a';//原始值
	int *p = &address;

	address = 'b'; //二级指针更改后的数值（修改后的数值）


	printf("address: %c\n", address);
	
	printf("p: %p\n", p); //可以把（int *）看成一个整体，也就是打印（&address）的地址

	printf("&address: %p\n", &address); //打印（&address）的地址

	printf("&p: %p\n", &p); //这里是打印二级指针的地址，二级指针的地址储存着（ p 与 &address）的地址

	

	printf("address: %c\n", address);

	printf("*p: %c\n", *p);// * 为指针运算符，它返回其操作数（即一个指针）所指向的对象的值，
						   // * 可以简单理解为取值


	system("pause");
	return 0;
}