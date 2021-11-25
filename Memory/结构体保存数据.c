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


	//strcmp()判断字符串是否相等
	if (!strcmp(pnum->gender,"man"))//判断储存在gender内的数据是否匹配"man"，如果是，就有接下来的操作，如果否就不执行接下来的操作
	{
		printf("Please Input your height:\n");
		scanf("%lf", &pnum->height);//结构体内height声明的不是数组，所以需要加上取地址符“&”
									//scanf()函数是通过指针指向变量的，
									//%佛告诉scanf函数在所传地址位置上存储一个“float”型值
									//而%lf告诉scanf函数在所传地址位置上存储一个double型值

		printf("Please Input your age:\n");
		scanf("%d", &pnum->age);//结构体内age声明的不是数组，所以需要加上取地址符“&”
	}

	 
	printf("\n");
	system("pause");
	return 0;
}