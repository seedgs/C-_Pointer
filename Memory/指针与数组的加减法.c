#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#define _CRT_SECURE_NO_WARNINGS

int main13()
{
	//ָ������Ͳ������Ǿ����˲����������˽�����ʽ
	//ָ������;�������ǰ�߼����ֽ�

	int num = 10;//int�������ʹ�С��4���ֽ�
	int* p = &num;//ָ����4���ֽ�   ָ���1�Ǽ���һ��ָ����ָ�����͵Ĵ�С

	//��Ȼʲô���͵�ָ�붼��4���ֽڣ���ôΪʲôҪ�������أ� void *p

	printf("%d\n%d\n",p,p+1); // 4

	char str = "h";//char�������ʹ�С��1���ֽ�
	char* pstr = &str;
	//����������������㣺pstr + sizeo��*pstr�� * 1
	printf("%d\n%d\n", pstr, pstr + 1);

	system("pause");
	return 0;
}