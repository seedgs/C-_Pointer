#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#define _CRT_SECURE_NO_WARNINGS

typedef struct Test1
{
	char hand[100];
	int *eyes;
	int body;
}Test1;

int main(void)
{
	
	Test1* mu = (Test1*)malloc(6 * sizeof(Test1));
	if (mu==NULL)
	{
		return -1;
	}
	for (int i = 0; i < 6; i++)
	{
		strcpy(mu[i].hand,"��ֵ���ṹ���ڵ�ָ��");
	}
	for (int i = 0; i < 6; i++)
	{
		printf("i����Ϊ��%d\n�ṹ���ڵ�ֵΪ��%s\n", i, mu[i].hand);
	}
	if (mu!=NULL)
	{
		free(mu);
		mu = NULL;
	}


	Test1 mu1[3] = { "haha",12,123, "haha",12,123, "haha",12,123 };
	Test1 mu2[3] = { {"haha",21,321}, {"haha",21,321}, {"haha",21,321}};
	printf("\n��̬���鴫��1��%s\n��̬���鴫��2��%d\n��̬���鴫��3��%d\n", mu1->hand, mu1->eyes, mu1->body);


	//���ṹ���ڵ����鴫ֵ
	int a;
	Test1* mu3 = &a;//������һ��ָ��
	char other1[4] = { '9','8','7' };//����һ����Ҫ���ε�����
	for (int j = 0;j < 4;j++)//��������������������Ƕ������������Ҫѭ����Խṹ���ڵ�����
	{						 //�������������������ֻ�е�һ��������ֻ��Ҫ��strcpy()������ֵ����
		mu3->hand[j] = other1[j];	
	}
	printf("\n���ṹ���ڵ����鴫�Σ�%s\n", mu3->hand);


	//���ṹ���ڵ�ָ�봫ֵ
	char other2[4] = { '5','4','3' };
	mu3->eyes = (Test1*)malloc(sizeof(Test1));//���ṹ���ڵ�ָ�봫�Σ�һ��Ҫ���ṹ���ڵ�ָ�����ռ䣬����ᱨ��
	strcpy(mu3->eyes, other2);//���ṹ���ڵ�ָ��  ����  ��Ҫ���ε�����(other����)
	printf("\n���ṹ���ڵ�ָ�봫�Σ�%s\n",mu3->eyes);
}