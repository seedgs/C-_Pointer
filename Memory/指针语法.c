#include<stdio.h>
#include<stdlib.h>

int main2()
{
	int loser = 228;
	printf("%p\n", &loser);

	int *p = &loser;//�����͸�ֵ����һ
	*p = 1030;//*ha�ž���ͨ���˺�ID�����ڴ棬���вٿ�


	//ָ�����������ʼ��  ���û��ֵ�Ļ��ͳ�ʼ��ΪNULL
	int *pa = NULL;//����������
	pa = &loser;//�����Ǹ�ֵ
	*pa = 2500;


	printf("%d\n", loser);
	system("pause");
	return 0;
}