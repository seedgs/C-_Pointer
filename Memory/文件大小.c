#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS


int main(void)
{

	FILE* num = fopen("test.txt", "r");

	if (num==NULL)
	{
		return -1;
	}
	//num�Ե�ǰָ���ɨ��
	//0Ϊƫ����
	//SEEK_ENDΪɨ�赽ĩβ������ɨ�赽ĩβΪ11�ֽڣ�
	//SEEK_SETΪɨ��Ŀ�ͷ������ɨ�赽��ͷΪ0�ֽڣ�
	fseek(num, 0, SEEK_END);//�ļ�ָ���ƶ���ĩβ��ɨ��һ�θ��ļ���
	int lenght = ftell(num);//��ȡ��ǰ�ļ�ָ����뿪ͷ�ĳ���
	printf("%d�ֽ�", lenght);



	fclose(num);
	num == NULL;


	printf("\n");
	system("pause");
	return 0;
}