#include<stdio.h>
#include<stdlib.h>

void main4() 
{
	int address = 'a';//ԭʼֵ
	int *p = &address;

	address = 'b'; //����ָ����ĺ����ֵ���޸ĺ����ֵ��


	printf("address: %c\n", address);
	
	printf("p: %p\n", p); //���԰ѣ�int *������һ�����壬Ҳ���Ǵ�ӡ��&address���ĵ�ַ

	printf("&address: %p\n", &address); //��ӡ��&address���ĵ�ַ

	printf("&p: %p\n", &p); //�����Ǵ�ӡ����ָ��ĵ�ַ������ָ��ĵ�ַ�����ţ� p �� &address���ĵ�ַ

	

	printf("address: %c\n", address);

	printf("*p: %c\n", *p);// * Ϊָ��������������������������һ��ָ�룩��ָ��Ķ����ֵ��
						   // * ���Լ����Ϊȡֵ


	system("pause");
	return 0;
}