#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#define _CRT_SECURE_NO_WARNINGS

char* phead()
{
	char* tmp = (char*)malloc(10);
	if (tmp==NULL)
	{
		return NULL;
	}
	strcpy(tmp, "1234");
	printf("tmp=ֵ��%s\n", tmp);
	printf("tmp=��ַ��%p\n",&tmp);

	return tmp;
}

int main1(void)
{
	char* p = NULL;
	p = phead();
	if (p!=NULL)
	{
		printf("p=����%s\n", p);
		printf("p=��ַ��%p", &p);


		free(p);
		p = NULL;
	}
	system("pause");
	return 0;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    