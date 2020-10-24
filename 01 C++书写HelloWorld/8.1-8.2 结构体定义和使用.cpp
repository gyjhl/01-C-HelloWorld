#include<iostream>
#include<string>
#include<ctime>
using namespace std;
/*
//结构体属于用户自定义的数据类型, 允许用户储存不同的数据类型

//1, 创建学生的数据类型

struct Student
{
	//成员列表

	//成员姓名
	string name;

	//年龄
	int age;

	//分数
	int score;
}s3;	//2.3 在创建结构体的时候顺便定义结构体变量

//2, 通过学生类型创建具体学生
//2.1, struct Student s1
//2.2, struct Student s2 = {...}
//2.3 在创建结构体的时候顺便定义结构体变量

//总结1 : 定义结构体时, 关键字struct不可以省略
//总结2 : 创建结构体变量时, 关键字struct可以省略
//总结3 : 结构体变量用操作符"."访问成员


int main() {

	//结构体定义 struct 结构体名 {结构体成员列表}

	//2.1, struct Student s1
	struct Student s1;
	s1.name = "张三";
	s1.age = 18;
	s1.score = 100;

	cout << "姓名: " << s1.name << " 年龄: " << s1.age << " 分数: " << s1.score << endl;
	//2.2, struct Student s2 = {...}
	struct Student s2 = { "李四" , 19, 80 };
	cout << "姓名: " << s2.name << " 年龄: " << s2.age << " 分数: " << s2.score << endl;

	s3.name = "王五";
	s3.age = 20;
	s3.score = 60;
	cout << "姓名: " << s3.name << " 年龄: " << s3.age << " 分数: " << s3.score << endl;

	system("pause");
	return 0;
}
*/