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


//����ṹ�岻�����ڴ�
//����������ʱ��ŻῪ���ڴ�

int main44(void)
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


	Test01 m1 = { "chacha",100 };
	Test01 m2 = m1;
	//m1��ֵ�����m2û���κι�ϵ��
	printf("m2��Face��ֵ��%s\nm2��Eyes��ֵ��%d\n\n", m2.Face, m2.Eyes);

	system("pause");
	return 0;
}