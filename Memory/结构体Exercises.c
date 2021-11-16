#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#define _CRT_SECURE_NO_WARNINGS

typedef struct Test01
{
	char Face[10];
	int Eyes;
}Test01;

Test01 anything = {"haha"};


//定义结构体不开辟内存
//声明变量的时候才会开辟内存

int main44(void)
{
	int a;
	a = 10;
	printf("%d\n",a);


	//如果上面Test01里面的数据类型与下面需要修改的数据类型不匹配修改的话，就会报错
	Test01 p;
	strcpy(p.Face, "keke");
	p.Eyes = 10;
	printf("%s\n%d\n\n", p.Face, p.Eyes);



	Test01 pum;
	Test01 *num = &pum;
	strcpy(num->Face, "haha");
	num->Eyes = 123;

	printf("%s\n%d\n\n", num->Face, num->Eyes);


	Test01 m1 = { "chacha",100 };
	Test01 m2 = m1;
	//m1赋值完后与m2没有任何关系了
	printf("m2中Face的值：%s\nm2中Eyes的值：%d\n\n", m2.Face, m2.Eyes);

	system("pause");
	return 0;
}