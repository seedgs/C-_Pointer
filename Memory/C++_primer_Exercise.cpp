#include<iostream>
#include<climits>

int main()
{
	using namespace std;
	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	cout << "int is " << sizeof(int) << " bytes." << endl;//int类型在32位状态下为4个字节
	cout << "short is " << sizeof n_short << " bytes." << endl;//short类型在32位状态下为4个字节
	cout << "long is " << sizeof n_long << " bytes." << endl << endl;//long类型在32位状态下为4个字节
	cout << "Maximum values:" << endl;
	cout << "int:" << n_int << endl;
	cout << "short:" << n_short << endl;
	cout << "long:" << n_long << endl << endl;
	cout << "Minimum int value = " << INT_MIN << endl;
	cout << "Bits per byte = " << CHAR_BIT << endl;
	system("pause");
	return 0;
}