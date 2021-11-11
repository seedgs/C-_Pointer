#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#define _CRT_SECURE_NO_WARNINGS




//结构体方法一
//这里Text是名称，可以随便起，但是首字母要大写
struct Text  
{
	char Face[10];
	int EyesSize;
};
//一下两个为类比
//由于我们上面定义了struct Text为一个数据类型
//所以int就是struct Text，a就是text01
int a;
struct Text test01 = { "hehe",20 };




//结构体方法二
//这里整个struct Text2{}就是类比一个int
//int text02
struct Text02
{
	char Face[8];
	int Body;
} test02 = { "haha",30 };


//结构体方法三（匿名结构体）
//连名字（Text03）都没写，所以叫匿名结构体
struct 
{
	char Face[8];
	int Body;
} test03 = { "haha",30 };




//结构体方法四
//通过typedef来定义结构体，typedef给一个数据类型起别名
//把struct Test04 替换成 Test04
//同时上下的test04名称要相同（否则报错）
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


	//箭头运算符
	//Test结构体它声明的时候是不开辟空间的
	//你必须初始化对象之后才开辟空间
	//初始化的对象是之前声明的
	Test04 test06;
	Test04 *p = &test06;
	strcpy(p->Face,"chacha");
	p->Body = 200;
	printf("%s\n%d", p->Face, p->Body);



	printf("\n");
	system("pause");
	return 0;
 }