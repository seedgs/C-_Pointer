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

	//结构体静态数组
	Test1 m1[3] = { "haha",100,"kaka",200 ,"hehe",300 };
	Test1 m2[3] = { {"caca1",400},{"caca2",500},{"caca3",600} };
	for (int i = 0; i < 3; i++)
	{
		printf("%s %d\n", m2[i].face, m2[i].Eyesize);
	}


	//结构体动态数组
	int a[3] = { 0 };
	int* p = (int*)malloc(3 * sizeof(int));//分配内存空间（声明一个指针指向堆区的一块内存）
	free(p);//释放内存空间



	//结构体声明指针类型
	
	Test1* mu = (Test1*)malloc(3 * sizeof(Test1));//指针一定要分配内存空间

	if (mu == NULL)//判断
	{
		return -1;
	}
	for (int i=0;i<3;i++)//传入数据
	{
		strcpy(mu[i].face,"cuocuo");//给数组写入内容要用到strcpy()函数
		mu[i].Eyesize = 100 + 1;//给变量赋值的方法
		mu[i].body = 10000;
	}
	for (int i=0;i<3;i++)
	{
		printf("\n第%d个\nface:%s\nEyesize:%d\nbody:%d\n\n", i, mu[i].face, mu[i].Eyesize,mu[i].body);
	}

	if (mu!=NULL)//判断
	{
		free(mu);//同一个内存空间不可以free两次
		mu = NULL;
	}
	
	
	system("pause"); 
	return 0;
}