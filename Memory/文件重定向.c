#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<windows.h>
#define _CRT_SECURE_NO_WARNINGS

int main5555(void)
{

	char num[10] = { 0 };

	//gets(num);//�Ѽ�����������ݴ洢�� num[100]�����У�
				//��Ϊget()����û�й涨���ȣ�������볬���涨�ĳ��ȣ��ڴ�ͻ���������±���

	fgets(num, 10, stdin);//fget()�����ǰѼ��̣�stdin���������ݴ洢�� num�����ڣ����涨����Ϊ10
	printf("ͨ�����̴洢�����飺%s", num);

	fputs("\nֱ����ʾ����ʾ����", stdout);
	fputs(num, stdout);
	

	//system(num);
	printf("\n");
	system("pause");
	return 0;
}