#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#define _CRT_SECURE_NO_WARNINGS


int num(int a)//括号内是传递a的意思
{
	a = 10;
	printf("a地址:%p\n", &a);
	return a;
}


void pnum(int *c)
{
	*c = 100;
	printf("c地址:%p\n", &c);

}


int main21(void)
{
	int a = 20;
	int b = num(a);
	printf("b地址:%p\n", &a);
	printf("b=%d\n", b);

	int d = 10;
	pnum(&d);//等价于int *a = &d
	
	printf("d=%d",d);
	printf("d地址:%p\n", &d);


	system("pause");
	return 0;
}