#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#define _CRT_SECURE_NO_WARNINGS


int num(int a)//�������Ǵ���a����˼
{
	a = 10;
	printf("a��ַ:%p\n", &a);
	return a;
}


void pnum(int *c)
{
	*c = 100;
	printf("c��ַ:%p\n", &c);

}


int main21(void)
{
	int a = 20;
	int b = num(a);
	printf("b��ַ:%p\n", &a);
	printf("b=%d\n", b);

	int d = 10;
	pnum(&d);//�ȼ���int *a = &d
	
	printf("d=%d",d);
	printf("d��ַ:%p\n", &d);


	system("pause");
	return 0;
}