#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#define _CRT_SECURE_NO_WARNINGS

typedef struct Test1
{
	char face[10];
	int Eyesize;
	int body;
}Test1;

int main77(void)
{

	//�ṹ�徲̬����
	Test1 m1[3] = { "haha",100,"kaka",200 ,"hehe",300 };
	Test1 m2[3] = { {"caca1",400},{"caca2",500},{"caca3",600} };
	for (int i = 0; i < 3; i++)
	{
		printf("%s %d\n", m2[i].face, m2[i].Eyesize);
	}


	//�ṹ�嶯̬����
	int a[3] = { 0 };
	int* p = (int*)malloc(3 * sizeof(int));//�����ڴ�ռ䣨����һ��ָ��ָ�������һ���ڴ棩
	free(p);//�ͷ��ڴ�ռ�



	//�ṹ������ָ������
	
	Test1* mu = (Test1*)malloc(3 * sizeof(Test1));//ָ��һ��Ҫ�����ڴ�ռ�

	if (mu == NULL)//�ж�
	{
		return -1;
	}
	for (int i=0;i<3;i++)//��������
	{
		strcpy(mu[i].face,"cuocuo");//������д������Ҫ�õ�strcpy()����
		mu[i].Eyesize = 100 + 1;//��������ֵ�ķ���
		mu[i].body = 10000;
	}
	for (int i=0;i<3;i++)
	{
		printf("\n��%d��\nface:%s\nEyesize:%d\nbody:%d\n\n", i, mu[i].face, mu[i].Eyesize,mu[i].body);
	}

	if (mu!=NULL)//�ж�
	{
		free(mu);//ͬһ���ڴ�ռ䲻����free����
		mu = NULL;
	}
	
	
	system("pause"); 
	return 0;
}