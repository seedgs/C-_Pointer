#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS


int main(void)
{

	FILE* num = fopen("test.txt", "r");

	if (num==NULL)
	{
		return -1;
	}
	//num对当前指针的扫描
	//0为偏移量
	//SEEK_END为扫描到末尾（这里扫描到末尾为11字节）
	//SEEK_SET为扫描的开头（这里扫描到开头为0字节）
	fseek(num, 0, SEEK_END);//文件指针移动到末尾（扫描一次该文件）
	int lenght = ftell(num);//获取当前文件指针距离开头的长度
	printf("%d字节", lenght);



	fclose(num);
	num == NULL;


	printf("\n");
	system("pause");
	return 0;
}