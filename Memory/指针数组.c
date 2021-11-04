#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#define _CRT_SECURE_NO_WARNINGS

int main22(void)
{
	int a = 1;
	int b = 2;
	int c = 3;
	int d[] = { 1,2,3,4 };
	for (int i = 0;i<4;i++)
	{
		printf("%d\n", d[i]);
	}


	//int a = 1;
	//int b = 2;
	//int c = 3;
	char *pa[] = { "a","b","c" };//Ö¸ÕëÊý×é
	for (int i = 0;i < 3; i++)
	{
		printf("%s\n", pa[i]);
	}

	system("pause");
	return 0;
}