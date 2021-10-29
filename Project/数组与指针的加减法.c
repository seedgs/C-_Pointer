#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#define _CRT_SECURE_NO_WARNINGS


int main(void)
{
	char num[] = "12345";
	printf("数值1=");
	for (int i = 0; i < sizeof(num); i++)
	{
		printf("%c", num[i]);
	}


	printf("\n\n");
	printf("数值2=");
	for (char *p = num; p < num + sizeof(num); p++)
	{
		printf("%c", *p);
	}

	printf("\n\n");
	system("pause");
	return 0;
}