#include<iostream>
#include<string>
#include<ctime>
using namespace std;

/*
//值传递

//实现两个数字进行交换函数
//如果一个函数不需要返回值, 声明的时候可以写void代表无类型返回值

void swap(int num1, int num2)
{
	cout << "交换前的数据" << endl;
	cout << "num1 = " << num1 <<endl;
	cout << "num2 = " << num2 <<endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "交换后的数据" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	//return;//返回值不需要的时候, 可以不写return, 也可以写return后面什么都不跟
}


int main() {

	//当我们做值传递的时候, 函数的形参发生改变, 并不会影响实参
	int a = 10;
	int b = 20;

	swap(a, b);

	system("pause");
	return 0;

}
*/