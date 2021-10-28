#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#define _CRT_SECURE_NO_WARNINGS


//两个函数声明一个同名变量，这两个变量有关系吗？（是不一样的，是要看内存分配的）
char* p_str1()
{
	char str1[100] = "1234";//指针是4个字节，4个字节  100个字节的数组是复制全局变量的内容，拷贝了一份到栈区上
							//和地址无关
	printf("p_str函数的str地址=%p\n",&str1);
	printf("p=%s\n",str1);
	
	return str1;
}

char* p_str2()
{
	char str2[10] = "1234";
	printf("p_str2函数的str地址=%p\n", &str2);
	printf("p2=%s\n", str2);
	return str2;
}

int main11()
{
	char *p1 = NULL;
	char* p2 = NULL;
	p1 = p_str1();//接收p_str()后，栈区的p_str()函数被销毁了
	p2 = p_str2();

	printf("main函数的str地址=%p\n", &p_str1);
	printf("p1=%s\n", p1);//p数组的首地址   p打印这个地址所对应的内存空间的内容是不是1234？
	printf("p2=%s\n", p2);//被释放的p2 = p_str2()居然能被打印数据，p_str2()函数里面的数组[]里的取值范围比p_str1()函数里面的数组“大”

	system("pause");
	return 0;
}