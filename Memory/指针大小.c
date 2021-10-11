#include<stdio.h>
#include<stdlib.h>

void main5()
{
	int pin = 'a';
	//32位系统下，指针的大写固定为（ 4 ）
	//64位系统下，指针的大小固定为（ 8 ）
	//指针大小不受声明类型（int、double、char等）的影响
	int *p = &pin;
	double *pp = &pin;
	char *ppp = &pin;

	printf("p指针的大小为：%d\n",sizeof(p));
	printf("pp指针的大小为： %d\n", sizeof(pp));
	printf("ppp指针的大小为： %d\n\n", sizeof(ppp));



	system("pause");
	return 0;
}