#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#define _CRT_SECURE_NO_WARNINGS

char* phead()//这里char*是在栈区声明phead()函数
{
	char* tmp = (char*)malloc(100);//在栈区phead()函数中声明指针tmp，并为在堆区分配100字节的空间
	if (tmp == NULL)
	{
		return NULL;
	}

	strcpy(tmp, "1234");//如果strcpy这里报错，可以参考：https://blog.csdn.net/xiewenrui1996/article/details/90582550
						//strcpy函数是先在全局区开辟了一个tmp，因为变量一定要在  全局区  里面建立
						//但是！但是strcpy函数同时在   把（全局区里面的东西）复制！复制！一份在  堆区   
						//此时  全局区  的变量与  堆区  的变量没有任何关系
	printf("tmp=值：%s\n", tmp);
	printf("tmp=地址：%p\n",&tmp);

	return tmp;         //最后返回tmp（这里是返回栈区的tmp地址）
}
//至此 栈区的phead函数被释放清空



int main(void)//在栈区声明main()函数
{
	char* p = NULL;//声明main函数内的指针p为NULL
	p = phead();//接收来自栈区phead()函数返回tmp地址（return tmp）
	if (p!=NULL)
	{
		printf("p=值：%s\n", p);//此时栈区内的main()函数指针p接收到来自 栈区 的phead()函数的返回tmp地址（已释放清空）
						  //所以这里的p地址就是已经释放清空的tmp地址，根据tmp的地址，可以找到   堆区  里的（复制拷贝全局区的tmp）的数值，也就是“1234”
						  // %s就是打印对应指针的数值
		free(p);//断开栈区内main()函数 与 堆区内tmp()函数的联系
		p = NULL;
	}

	printf("p=地址：%p\n",&p);


	system("pause");
	return 0;
}//到这里为止会释放清空main()函数