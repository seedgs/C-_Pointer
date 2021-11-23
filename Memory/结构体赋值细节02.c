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
	char* num = "123456";//不涉及字符串的转移，全局区是不能更改的
	qTe->c = num;
	printf("在全局区赋值的情况：%s\n", num);

	char keke[10] = { '1','2','3','4','5','6','7'};//新建栈上的数组 
	qTe->c = keke;
	printf("在栈区赋值的情况01：%s\n", qTe->c);

	char haha[10] = { '1','2','3','4','5','6','7','8'};
	qTe->c = (Test02*)malloc(10 * sizeof(Test02));
	strcpy(qTe->c, haha);
	printf("在栈区赋值的情况02：%s\n", qTe->c);



	system("pause");
	return 0;
}