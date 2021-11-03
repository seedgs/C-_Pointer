#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	char str[] = "12345";

	for (int i = 0;i < sizeof(str);i++)
	{
		printf("%c", str[i]);
		
	}
	printf("\n\n");

	for (char *p = str;p < str + 6;p++)//也可以把p < str + 6  改成  p < str + sizeof(str)
									   //sizeof(str)意思是  数组的数量，例子 str[0]：sizeof(str)数组数量为2，str[1]：sizeof(str)数组数量为3
									   //所有数组中括号内分配的数字 +2，加的第一个是开头的 0 ， 加的第二个是最后的 /0

	//str是一个数组的首地址
	//p++ 意思是 指针p + 1，一直加加加，加到str < 5为止
	//str + 5 意思是 str这个数组的地址  
	//加上5个char类型的大小（char类型是4个字节，就是加20个字节），也就是把数组都加了一遍 


	//可以看“数组与指针.c”里面有说打印数组本身，就是打印数组首元素的地址

	{
		printf("%c",*p);
		//综上所述，在for循环内，每 p+1，就是str首地址 +1，又因为地址可以获取对应的数值，
		//所以当str + 1，for循环就打印str地址对应的地址
	}
	printf("\n\n");
	system("pause");
	return 0;
}