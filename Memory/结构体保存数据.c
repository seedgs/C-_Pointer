#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<windows.h>
#define _CRT_SECURE_NO_WARNINGS

typedef struct Test01
{
	char name[10];
	char gender[10];
	double height;
	int age;
}Test01;

int main444(void)
{

	Test01 num = { 0 };
	Test01* pnum = &num;
	printf("Please Input your name:\n");
	scanf("%s", pnum->name);
	//printf("%s\n", pnum->name);

	printf("Please Input your gender:\n");
	scanf("%s", pnum->gender);
	//printf("%s\n", pnum->gender);


	//strcmp()�ж��ַ����Ƿ����
	if (!strcmp(pnum->gender,"man"))//�жϴ�����gender�ڵ������Ƿ�ƥ��"man"������ǣ����н������Ĳ����������Ͳ�ִ�н������Ĳ���
	{
		printf("Please Input your height:\n");
		scanf("%lf", &pnum->height);//�ṹ����height�����Ĳ������飬������Ҫ����ȡ��ַ����&��
									//scanf()������ͨ��ָ��ָ������ģ�
									//%�����scanf������������ַλ���ϴ洢һ����float����ֵ
									//��%lf����scanf������������ַλ���ϴ洢һ��double��ֵ

		printf("Please Input your age:\n");
		scanf("%d", &pnum->age);//�ṹ����age�����Ĳ������飬������Ҫ����ȡ��ַ����&��
	}

	 
	printf("\n");
	system("pause");
	return 0;
}