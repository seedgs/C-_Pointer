#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#define _CRT_SECURE_NO_WARNINGS

//����ṹ���ڲ���һ��ָ���ܷ�ֱ�Ӹ�ָ�뿽������
typedef struct Test1
{
	//char eyes[10];
	char* eyes;
	int body;
}Test1;

int main88(void)
{

	Test1 m1;
	m1.eyes = (Test1*)malloc(sizeof(Test1));//ָ��һ��Ҫ�����ڴ�ռ䣨�ṹ���ڵ�eyesΪָ��ṹ��
	strcpy(m1.eyes, "haha");
	m1.body = 123;
	printf("eyes=%s\nbody=%d\n", m1.eyes, m1.body);

	if (m1.eyes!=NULL)
	{
		free(m1.eyes);
		m1.eyes = NULL;
	}

	system("pause");
	return 0;
}