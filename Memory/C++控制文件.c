#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<windows.h>
#define _CRT_SECURE_NO_WARNINGS


int main(void)
{
	FILE* num = NULL;//声明一个文件指针
	num = fopen("\\test.txt", "w+");//创建文件,如果只有文件名，文件的创建会在所属的根目录里面
	if (num == NULL)//判断创建成功时，返回的值为-1
	{
		return -1;
	}
	fclose(num);//关闭文件
	num = NULL;//重新指向


	printf("\n");
	system("pause");
	return 0;
}