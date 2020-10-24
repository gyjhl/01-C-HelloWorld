#include<iostream>
using namespace std;

int main2_22() {
	//整型
	//1, shrot短整型(2个字节)
	//2, int整型(4个字节)
	//3, long长整型(4个字节)
	//4, long long长长整型(8个字节)
	//可以利用sizeof求出数据类型占用内存大小
	//语法: sizeof(数据类型/变量)
	
	short num1 = 10;
	int num2 = 10;
	long num3 = 10;
	long long num4 = 10;

	cout << "short占用的内容空间为 " << sizeof(short) << endl;
	cout << "num1占用的内容空间为 " << sizeof(num1) << endl;
	cout << "int占用的内容空间为 " << sizeof(int) << endl;
	cout << "num2占用的内容空间为 " << sizeof(num2) << endl;
	cout << "long占用的内容空间为 " << sizeof(long) << endl;
	cout << "num3占用的内容空间为 " << sizeof(num3) << endl;
	cout << "long long占用的内容空间为 " << sizeof(long long) << endl;
	cout << "num4占用的内容空间为 " << sizeof(num4) << endl;

	//整型大小比较
	//short < int < = long <= long long

	system("pause");

	return 0;

}