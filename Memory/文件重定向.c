#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<windows.h>
#define _CRT_SECURE_NO_WARNINGS

int main5555(void)
{

	char num[10] = { 0 };

	//gets(num);//把键盘输入的内容存储到 num[100]数组中；
				//因为get()函数没有规定长度，如果输入超过规定的长度，内存就会溢出，导致报错

	fgets(num, 10, stdin);//fget()函数是把键盘（stdin参数）内容存储到 num数组内，并规定长度为10
	printf("通过键盘存储至数组：%s", num);

	fputs("\n直接显示至显示器：", stdout);
	fputs(num, stdout);
	

	//system(num);
	printf("\n");
	system("pause");
	return 0;
}