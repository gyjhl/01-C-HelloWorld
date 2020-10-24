#include<iostream>
#include<string>
using namespace std;

int main2_6() {

	//1, C风格的字符串
	//注意事项 char 字符串名 []
	//注意事项2 等号后面要用双引号将字符串包含起来
	char str[] = "hello world";
	cout << str << endl;

	//2. C++风格字符串
	//包含一个头文件 #include<string>
	string str2 = "hello world";
	cout << str2 << endl;

	system("pause");

	return 0;

}