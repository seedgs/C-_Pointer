#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#define _CRT_SECURE_NO_WARNINGS

//ջ���ϵı���ִ����Ϻ󣬱�����������

char* pMem1()
{
	char* p1 = "1234";
	return p1;
}
//����������ϣ�������ջ�����ٵ��ڴ��������


//������ͬ�ĺ���������һ����ͬ���ַ��������ǵĵ�ַһ����
//ȫ������ͬ�ַ����ϲ�
char* pMem2()
{
	char* p2 = "1234";
	return p2;
}

char* pMem3()
{
	char* p3 = "12345";
	return p3;

}

int main10()
{
	char* p1 = NULL;
	char* p2 = NULL;
	char* p3 = NULL;
	 
	
	p1 = pMem1();
	p2 = pMem2();
	p3 = pMem3();


	//%s�Ǵ�ӡ��ַ��ָ�����������Ҳ����ֵ��
	printf("p1ֵ=%s,p1�ڴ��ַ=%p\n", p1, p1);
	printf("p2ֵ=%s,p2�ڴ��ַ=%p\n", p2, p2);
	printf("p3ֵ=%s,p3�ڴ��ַ=%p\n", p3, p3);

	system("pause");
}