#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#define _CRT_SECURE_NO_WARNINGS

int main9()
{
	int a = 10;

	a = 1;
	printf("a=%d\n", a);//ֱ�Ӹ����ڴ�

	int *q = &a;
	printf("\n�޸��ڴ�ֵǰ�ĵ�ַ��\n");
	printf("q=%p\n&a=%p\n", q, &a);
	printf("*q=%d\n", *q);

	*q = 1000;
	printf("\n\n\n\n�޸��ڴ�ֵ��ĵ�ַ��\n");//��ַ������ָʾ�ڴ�ģ������洢�����ڴ棬������������޸���ֵ���ڴ�ĵ�ַ���ǲ����
	printf("q=%p\n&a=%p\n", q, &a);
	printf("*q=%d\n\n", *q);//��Ӵ�ӡ�ڴ�


	system("pause");
	return 0;
}