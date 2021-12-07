#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS


int main787878(void)
{
	FILE* num = fopen("test.txt","r");
	int pum = NULL;
	while (!feof(num))
	{
		pum = fgetc(num);
		printf("%c", pum);
	}

	if (num==NULL)
	{
		return -1;
	}
	fclose(num);
	num = NULL;


	printf("\n");
	system("pause");
	return 0;
}