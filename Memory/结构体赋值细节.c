#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#define _CRT_SECURE_NO_WARNINGS

typedef struct Test1
{
	char leg[10];
	char* eyes;
	int blood;
}Test1;

int main(void)
{
	int a;
	Test1* MyBody = &a;
	
	char q[5] = { '1','2','3','4'};
	strcpy(MyBody->eyes, q);
	printf("%s\n", MyBody->eyes);


	char p[4] = { '1','2','3' };
	for (int i=0;i<4;i++)
	{
		MyBody->leg[i] = p[i];
	}


	printf("%s\n", MyBody->leg);

	system("pause");
	return 0;
}