#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#define _CRT_SECURE_NO_WARNINGS


typedef struct Test01
{
	char a[10];
	int b;
}Test01;

typedef struct Test02
{
	char* c;
}Test02;


int main(void)
{
	Test02 pum;
	Test02* qTe = &pum;
	char* num = "123456";//���漰�ַ�����ת�ƣ�ȫ�����ǲ��ܸ��ĵ�
	qTe->c = num;
	printf("��ȫ������ֵ�������%s\n", num);

	char keke[10] = { '1','2','3','4','5','6','7'};//�½�ջ�ϵ����� 
	qTe->c = keke;
	printf("��ջ����ֵ�����01��%s\n", qTe->c);

	char haha[10] = { '1','2','3','4','5','6','7','8'};
	qTe->c = (Test02*)malloc(10 * sizeof(Test02));
	strcpy(qTe->c, haha);
	printf("��ջ����ֵ�����02��%s\n", qTe->c);



	system("pause");
	return 0;
}