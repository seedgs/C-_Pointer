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
typedef struct Text04
{
	char Face[8];
	int Body;
} Test04;

Test04 text04 = { "haha",30 };





int main(void)
{


	printf("\n");
	system("pause");
	return 0;
 }