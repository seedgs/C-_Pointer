#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#define _CRT_SECURE_NO_WARNINGS

typedef struct Test01
{
	char Face[10];
	int Eyes;
}Test01;

Test01 anything = {"haha"};





int main(void)
{
	int a;
	a = 10;
	printf("%d\n",a);


	//�������Test01���������������������Ҫ�޸ĵ��������Ͳ�ƥ���޸ĵĻ����ͻᱨ��
	Test01 p;
	strcpy(p.Face, "keke");
	p.Eyes = 10;
	printf("%s\n%d\n\n", p.Face, p.Eyes);



	Test01 pum;
	Test01 *num = &pum;
	strcpy(num->Face, "haha");
	num->Eyes = 123;

	printf("%s\n%d\n\n", num->Face, num->Eyes);


	system("pause");
	return 0;
}