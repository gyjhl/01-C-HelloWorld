#include<iostream>
#include<string>
using namespace std;

int main2_7() {

	//1,创建bool数据类型
	bool flag = true; //true代表真
	cout << flag << endl;
	//2,查看bool类型所占内存空间
	flag = false; //false代表假
	cout << flag << endl;
	//本质上1代表真, 0代表假

	//查看bool类型所占的空间
	cout << "bool类型所占的空间:" << sizeof(bool) << endl;


	system("pause");

	return 0;

}