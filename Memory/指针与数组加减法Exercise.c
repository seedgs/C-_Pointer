#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	char str[] = "12345";

	for (int i = 0;i < sizeof(str);i++)
	{
		printf("%c", str[i]);
		
	}
	printf("\n\n");

	for (char *p = str;p < str + 6;p++)//Ҳ���԰�p < str + 6  �ĳ�  p < str + sizeof(str)
									   //sizeof(str)��˼��  ��������������� str[0]��sizeof(str)��������Ϊ2��str[1]��sizeof(str)��������Ϊ3
									   //���������������ڷ�������� +2���ӵĵ�һ���ǿ�ͷ�� 0 �� �ӵĵڶ��������� /0

	//str��һ��������׵�ַ
	//p++ ��˼�� ָ��p + 1��һֱ�ӼӼӣ��ӵ�str < 5Ϊֹ
	//str + 5 ��˼�� str�������ĵ�ַ  
	//����5��char���͵Ĵ�С��char������4���ֽڣ����Ǽ�20���ֽڣ���Ҳ���ǰ����鶼����һ�� 


	//���Կ���������ָ��.c��������˵��ӡ���鱾�����Ǵ�ӡ������Ԫ�صĵ�ַ

	{
		printf("%c",*p);
		//������������forѭ���ڣ�ÿ p+1������str�׵�ַ +1������Ϊ��ַ���Ի�ȡ��Ӧ����ֵ��
		//���Ե�str + 1��forѭ���ʹ�ӡstr��ַ��Ӧ�ĵ�ַ
	}
	printf("\n\n");
	system("pause");
	return 0;
}