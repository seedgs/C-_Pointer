#include<stdio.h>
#include<stdlib.h>



int main1 ()
{
	//a是地址的别名
	int a = 10;
	printf("%p\n", &a);

	printf("%d\n", a);

	system("pause");
	return 0;
}