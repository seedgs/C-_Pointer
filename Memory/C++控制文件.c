#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<windows.h>
#define _CRT_SECURE_NO_WARNINGS


int main666(void)
{
	FILE* num = NULL;//����һ���ļ�ָ��(Ҳ���ǳ�ʼ��Ϊ0)
	num = fopen("C:\\Users\\huanghui\\source\\repos\\Memory\\Memory\\test.txt", "w+");//�����ļ�,���ֻ���ļ������ļ��Ĵ������������ĸ�Ŀ¼����

	if (num == NULL)//���д���ʱ������ֵΪ-1
					//�жϴ����ɹ�ʱ�����ص�ֵΪ0
	{
		return -1;
	}

	fputs("654321", num);//fputs(��д�����ϵͳ�Ļ�������������ֱ��д�룬Ŀ����Ϊ�˼���Ӳ�̶�д�������Ӷ��ӻ�Ӳ��ʹ������

	fclose(num);//�ر��ļ���ͬʱ�ѻ������ڵ�����д���ļ�
	num = NULL;//���³�ʼ��




	printf("\n");
	system("pause");
	return 0;
}