#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#define _CRT_SECURE_NO_WARNINGS


char* p_str1()
{
		
	char str1[100] = "1234";//ָ����4���ֽڣ�4���ֽ�  100���ֽڵ������Ǹ���ȫ�ֱ��������ݣ�������һ�ݵ�ջ����
							//�͵�ַ�޹�
	printf("p_str������str��ַ=%p\n",&str1);
	printf("p=%s\n",str1);
	return str1;
}

char* p_str2()
{

	char str2[100] = "1234";
	printf("p_str2������str��ַ=%p\n", &str2);
	printf("p2=%s\n", str2);
	return str2;
}

int main()
{

	char *p1 = NULL;
	char* p2 = NULL;
	p1 = p_str1();//����p_str()��ջ����p_str()������������
	p2 = p_str2();

	printf("main������str��ַ=%p\n", &p_str1);
	printf("p1=%s\n", p1);//p������׵�ַ   p��ӡ�����ַ����Ӧ���ڴ�ռ�������ǲ���1234��
	printf("p2=%s\n", p2);//���ͷŵ�p2 = p_str2()��Ȼ�ܱ���ӡ���ݣ�p_str2()�������������[]���ȡֵ��Χ��p_str1()������������顰��
	system("pause");
	return 0;
}