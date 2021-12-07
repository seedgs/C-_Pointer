#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	FILE* num = fopen("test.txt","r");

	int pum = 0;
	if (num==NULL)
	{
		return -1;
	}

	//feof()函数检查文件流是否读到文件尾
		//当检查成功后，返回 0
		//当检查到文件尾，返回 非0
	//添加感叹号就代表完全反转
		//当检查成功后，返回 非0
		//当检查到文件尾，返回 0
	while (!feof(num))//这样就可以读取内容了
	{
		pum = fgetc(num);
		printf("%c", pum);
	}

	fclose(num);
	num = NULL;


	printf("\n");
	system("pause");
	return 0;
}