#include<iostream>
#include<string>
#include<ctime>
using namespace std;

/*
int main() {
	
	//案例描述, 水仙花数是指一个3位数, 他的每个位上的数字的3次幂之和等于他本身
	//利用do while语句求出所有的3位数的水仙花数

	//1, 先打印所有的三位数字
	int num = 100;
	do
	{
		//2, 从所有的三位数字中找到水仙花数
		int a = 0;
		int b = 0;
		int c = 0;
		a = num % 10; //获得数字的各位
		b = num / 10 % 10; //获得数字的十位
		c = num / 100; //获得数字的百位

		if(a*a*a+b*b*b+c*c*c==num)
		{
		cout << num << endl;
		num++;
		}
	} while (num < 1000);


	system("pause");
	return 0;

}
*/