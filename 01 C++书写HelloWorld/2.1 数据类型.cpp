#include<iostream>
using namespace std;

int main2_1() {
	//整型
	//1, 短整型(-32768 -- 32767)(-2^15 - 2^15-1)
	short num1 = 10;
	//如果
	//short num1 = 32768; 就会越界, 就会出错显示num1 = -32768

	//2, 整型
	int num2 = 10;

	//3, 长整型
	long num3 = 10;

	//4, 长长整型
	long long num4 = 10;

	
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "num3 = " << num3 << endl;
	cout << "num4 = " << num4 << endl;

	system("pause");

	return 0;

}