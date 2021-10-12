#include<stdlib.h>
#include<stdio.h>
#include<windows.h>


int main(void)
{
	//数组首元素地址和数组的地址是一致的(一维数组)

	char a[3] = { 1,2,3 };//中括号里面1，2，3分 别在内存里面有独立的地址
						  // char类型数组内的每个元素是1个字节的大小
						
	printf("a数组的地址：%p\na数组的第一个元素地址：%p\na数组的第二个元素地址：%p\na数组的第三个元素地址：%p\n\n\n\n", &a, &a[0],& a[1], &a[2]);//a的地址与a数组的第一个元素1的地址是一致的



	int b[10] = { 1,2,3,4,5,6,7,8,9,10 };

	printf("b数组第一个元素地址：%p\nb数组第一个元素+1的地址：%p\nb数组地址：%p\nb数组地址+1的地址：%p\n\n\n\n", b, b + 1, &b, &b + 1);
	//由于int类型数组内的每个元素是4个字节的大小
	//所以
	// b（数组的第一个元素）= xxxxxx0
	// b + 1（数组的第二个元素的地址) = xxxxxx4
	// &b（数组的地址，也就是数组第一个元素的地址） = xxxxxx0
	// &b + 1（数组地址，加上数组地址，因为数组里面元素有10个，根据int类型每个数组元素的大小为4个字节，所以b数组大小为40个字节） = xxxxx40


	system("pause");
	return 0;
}