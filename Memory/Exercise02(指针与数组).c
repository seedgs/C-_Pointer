#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int a = 10;//��a�������������Ӧ���ڴ�ռ��з�һ��10
	int b[10];//int ���͵�����

	printf("sizeof(a)��%d���ֽ�\n",sizeof(a));//a�����Ĵ�СΪ4���ֽ�
	printf("sizeof(int *)��%d���ֽ�\n", sizeof(int *));//32λϵͳ�£��������͵�ָ�붼Ϊ4�ֽڣ�64λϵͳ�£��������͵�ָ��Ϊ8���ֽ�
	printf("sizeof(char *)��%d���ֽ�\n", sizeof(char *));//32λϵͳ�£��������͵�ָ�붼Ϊ4�ֽڣ�64λϵͳ�£��������͵�ָ��Ϊ8���ֽ�
	printf("sizeof(double *)��%d���ֽ�\n", sizeof(double *));//32λϵͳ�£��������͵�ָ�붼Ϊ4�ֽڣ�64λϵͳ�£��������͵�ָ��Ϊ8���ֽ�
	printf("sizeof(b[0])��%d���ֽ�\n", sizeof(b[0]));//b�����һ��Ԫ�ش�СΪ4���ֽ�
	printf("sizeof(b)��%d���ֽ�\n", sizeof(b));//b�����СΪ40���ֽڣ���Ϊ��������Ϊ10������10��Ԫ�أ�ÿ��Ԫ��4���ֽڣ���40���ֽ�
	printf("sizeof(*b)��%d���ֽ�\n", sizeof(*b)); //32λϵͳ�£��������͵�ָ�붼Ϊ4�ֽڣ�64λϵͳ�£��������͵�ָ��Ϊ8���ֽ�

	system("pause");
	return 0;
}