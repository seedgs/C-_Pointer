#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#define _CRT_SECURE_NO_WARNINGS




//�ṹ�巽��һ
//����Text�����ƣ���������𣬵�������ĸҪ��д
struct Text  
{
	char Face[10];
	int EyesSize;
};
//һ������Ϊ���
//�����������涨����struct TextΪһ����������
//����int����struct Text��a����text01
int a;
struct Text test01 = { "hehe",20 };




//�ṹ�巽����
//��������struct Text2{}�������һ��int
//int text02
struct Text02
{
	char Face[8];
	int Body;
} test02 = { "haha",30 };


//�ṹ�巽�����������ṹ�壩
//�����֣�Text03����ûд�����Խ������ṹ��
struct 
{
	char Face[8];
	int Body;
} test03 = { "haha",30 };




//�ṹ�巽����
//ͨ��typedef������ṹ�壬typedef��һ���������������
//��struct Test04 �滻�� Test04
//ͬʱ���µ�test04����Ҫ��ͬ�����򱨴�
typedef struct Text04
{
	char Face[8];
	int Body;
} Test04;

Test04 text04 = { "haha",30 };





int main33(void)
{
	//int a;
	//a = 10;

	Test04 test05;
	
	//test05.Face = { "haha" };
	
	strcpy(test05.Face, "haha" );
	test05.Body = 1000;
	printf("%s\n%d\n\n",test05.Face,test05.Body);


	//��ͷ�����
	//Test�ṹ����������ʱ���ǲ����ٿռ��
	//������ʼ������֮��ſ��ٿռ�
	//��ʼ���Ķ�����֮ǰ������
	Test04 test06;
	Test04 *p = &test06;
	strcpy(p->Face,"chacha");
	p->Body = 200;
	printf("%s\n%d", p->Face, p->Body);



	printf("\n");
	system("pause");
	return 0;
 }