#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#define _CRT_SECURE_NO_WARNINGS

char* phead()//����char*����ջ������phead()����
{
	char* tmp = (char*)malloc(100);//��ջ��phead()����������ָ��tmp����Ϊ�ڶ�������100�ֽڵĿռ�
	if (tmp == NULL)
	{
		return NULL;
	}

	strcpy(tmp, "1234");//���strcpy���ﱨ�����Բο���https://blog.csdn.net/xiewenrui1996/article/details/90582550
						//strcpy����������ȫ����������һ��tmp����Ϊ����һ��Ҫ��  ȫ����  ���潨��
						//���ǣ�����strcpy����ͬʱ��   �ѣ�ȫ��������Ķ��������ƣ����ƣ�һ����  ����   
						//��ʱ  ȫ����  �ı�����  ����  �ı���û���κι�ϵ
	printf("tmp=ֵ��%s\n", tmp);
	printf("tmp=��ַ��%p\n",&tmp);

	return tmp;         //��󷵻�tmp�������Ƿ���ջ����tmp��ַ��
}
//���� ջ����phead�������ͷ����



int main(void)//��ջ������main()����
{
	char* p = NULL;//����main�����ڵ�ָ��pΪNULL
	p = phead();//��������ջ��phead()��������tmp��ַ��return tmp��
	if (p!=NULL)
	{
		printf("p=ֵ��%s\n", p);//��ʱջ���ڵ�main()����ָ��p���յ����� ջ�� ��phead()�����ķ���tmp��ַ�����ͷ���գ�
						  //���������p��ַ�����Ѿ��ͷ���յ�tmp��ַ������tmp�ĵ�ַ�������ҵ�   ����  ��ģ����ƿ���ȫ������tmp������ֵ��Ҳ���ǡ�1234��
						  // %s���Ǵ�ӡ��Ӧָ�����ֵ
		free(p);//�Ͽ�ջ����main()���� �� ������tmp()��������ϵ
		p = NULL;
	}

	printf("p=��ַ��%p\n",&p);


	system("pause");
	return 0;
}//������Ϊֹ���ͷ����main()����