#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#define _CRT_SECURE_NO_WARNINGS

//栈区上的变量执行完毕后，变量就销毁了

char* pMem1()
{
	char* p1 = "1234";
	return p1;
}
//函数调用完毕，函数在栈区开辟的内存就销毁了


//两个不同的函数定义了一个相同的字符串，他们的地址一样吗？
//全局区相同字符串合并
char* pMem2()
{
	char* p2 = "1234";
	return p2;
}

char* pMem3()
{
	char* p3 = "12345";
	return p3;

}

int main10()
{
	char* p1 = NULL;
	char* p2 = NULL;
	char* p3 = NULL;
	 
	
	p1 = pMem1();
	p2 = pMem2();
	p3 = pMem3();


	//%s是打印地址所指向的内容区域（也就是值）
	printf("p1值=%s,p1内存地址=%p\n", p1, p1);
	printf("p2值=%s,p2内存地址=%p\n", p2, p2);
	printf("p3值=%s,p3内存地址=%p\n", p3, p3);

	system("pause");
}