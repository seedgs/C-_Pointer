#include<stdio.h>
#include<stdlib.h>

int main3() {

	int a = 250;
	*(&a) = 38;//ָ�븳ֵ
	printf("%d\n", a);


	int *q = NULL;
	q = &a;
	*q = 12;
	printf("%p\n", q);//�����Ǵ�ӡ&a��ַ(%p��ӡ��ַ)
	printf("%d\n", *q);


	system("pause");
	return 0;
}