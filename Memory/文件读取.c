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

	//feof()��������ļ����Ƿ�����ļ�β
		//�����ɹ��󣬷��� 0
		//����鵽�ļ�β������ ��0
	//��Ӹ�̾�žʹ�����ȫ��ת
		//�����ɹ��󣬷��� ��0
		//����鵽�ļ�β������ 0
	while (!feof(num))//�����Ϳ��Զ�ȡ������
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