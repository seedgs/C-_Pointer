#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<windows.h>
#define _CRT_SECURE_NO_WARNINGS


int main(void)
{
	FILE* num = NULL;//����һ���ļ�ָ��
	num = fopen("\\test.txt", "w+");//�����ļ�,���ֻ���ļ������ļ��Ĵ������������ĸ�Ŀ¼����
	if (num == NULL)//�жϴ����ɹ�ʱ�����ص�ֵΪ-1
	{
		return -1;
	}
	fclose(num);//�ر��ļ�
	num = NULL;//����ָ��


	printf("\n");
	system("pause");
	return 0;
}