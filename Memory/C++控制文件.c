#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<windows.h>
#define _CRT_SECURE_NO_WARNINGS


int main666(void)
{
	FILE* num = NULL;//声明一个文件指针(也就是初始化为0)
	num = fopen("C:\\Users\\huanghui\\source\\repos\\Memory\\Memory\\test.txt", "w+");//创建文件,如果只有文件名，文件的创建会在所属的根目录里面

	if (num == NULL)//运行错误时，返回值为-1
					//判断创建成功时，返回的值为0
	{
		return -1;
	}

	fputs("654321", num);//fputs(）写入的是系统的缓冲区，而不是直接写入，目的是为了减少硬盘读写次数，从而延缓硬盘使用寿命

	fclose(num);//关闭文件，同时把缓冲区内的内容写进文件
	num = NULL;//重新初始化




	printf("\n");
	system("pause");
	return 0;
}