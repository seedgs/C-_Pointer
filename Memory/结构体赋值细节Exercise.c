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
		strcpy(mu[i].hand,"赋值给结构体内的指针");
	}
	for (int i = 0; i < 6; i++)
	{
		printf("i的数为：%d\n结构体内的值为：%s\n", i, mu[i].hand);
	}
	if (mu!=NULL)
	{
		free(mu);
		mu = NULL;
	}


	Test1 mu1[3] = { "haha",12,123, "haha",12,123, "haha",12,123 };
	Test1 mu2[3] = { {"haha",21,321}, {"haha",21,321}, {"haha",21,321}};
	printf("\n静态数组传参1：%s\n静态数组传参2：%d\n静态数组传参3：%d\n", mu1->hand, mu1->eyes, mu1->body);


	//给结构体内的数组传值
	int a;
	Test1* mu3 = &a;//先声明一个指针
	char other1[4] = { '9','8','7' };//声明一个需要传参的数组
	for (int j = 0;j < 4;j++)//如果上面声明的数组内是多个参数，则需要循环配对结构体内的数组
	{						 //如果上面声明的数组内只有单一参数，则只需要用strcpy()函数赋值即可
		mu3->hand[j] = other1[j];	
	}
	printf("\n给结构体内的数组传参：%s\n", mu3->hand);


	//给结构体内的指针传值
	char other2[4] = { '5','4','3' };
	mu3->eyes = (Test1*)malloc(sizeof(Test1));//给结构体内的指针传参，一定要给结构体内的指针分配空间，否则会报错
	strcpy(mu3->eyes, other2);//给结构体内的指针  关联  需要传参的数组(other数组)
	printf("\n给结构体内的指针传参：%s\n",mu3->eyes);
}