#include<iostream>
using namespace std;

int main2_3() {
	//1, 单精度, float
	//2, 双精度, double

	//小数点后面不加f默认是double精度
	//float f1 = 3.14;
	//小数后面加f默认是float精度

	//默认情况下, 输出一个小数会显示出6位有效数字(在C++中, 显示更多小数需要复杂的配置)

	float f1 = 3.1415926f;

	double d1 = 3.1415926;

	cout << "f1 = " << f1 << endl;

	cout << "d1 = " << d1 << endl;

	//统计float和double的占用内存空间

	//float占4个字节
	cout << "float所占用的内存空间为 " << sizeof(float) << endl;
	//double占8个字节
	cout << "double所占用的内存空间为 " << sizeof(double) << endl;

	//科学计数法
	float f2 = 3e2; //3*10^2
	cout << "f2 = " << f2 << endl;

	float f3 = 3e-2; //3*0.1^2
	cout << "f3 = " << f3 << endl;

	system("pause");

	return 0;

}