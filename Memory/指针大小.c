#include<stdio.h>
#include<stdlib.h>

void main5()
{
	int pin = 'a';
	//32λϵͳ�£�ָ��Ĵ�д�̶�Ϊ�� 4 ��
	//64λϵͳ�£�ָ��Ĵ�С�̶�Ϊ�� 8 ��
	//ָ���С�����������ͣ�int��double��char�ȣ���Ӱ��
	int *p = &pin;
	double *pp = &pin;
	char *ppp = &pin;

	printf("pָ��Ĵ�СΪ��%d\n",sizeof(p));
	printf("ppָ��Ĵ�СΪ�� %d\n", sizeof(pp));
	printf("pppָ��Ĵ�СΪ�� %d\n\n", sizeof(ppp));



	system("pause");
	return 0;
}