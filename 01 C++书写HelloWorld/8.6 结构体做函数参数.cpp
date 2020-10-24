#include<iostream>
#include<string>
#include<ctime>
using namespace std;

//结构体做函数参数

//传递方式有两种:

//1, 值传递

//2, 地址传递

//定义一个学生的结构体
struct student
{
	string name;	//成员姓名
	int age;	//成员年龄
	int score;	//成员分数
};

//1,  值传递
void printStudent1(struct student s)
{
	s.age = 100;
	cout << "子函数中打印 " << endl
	 << "学生姓名: " << s.name << endl
	 << "学生年龄: " << s.age << endl
	 << "学生成绩: " << s.score << endl;
}

//1,  地址传递
void printStudent2(struct student * p)
{
	p->age = 200;
	cout << "子函数2中打印 " << endl
		 << "学生姓名: " << p->name << endl
		 << "学生年龄: " << p->age << endl
		 << "学生成绩: " << p->score << endl;
}

int main() {

	//结构体做参数
	//将学生传入到一个参数中,打印学生身上的所有信息

	//创建结构体变量
	struct student s;
	s.name = "张三";
	s.age = 20;
	s.score = 85;

	printStudent1(s);
	printStudent2(&s);

	cout << "main函数中打印 " << endl
		 << "学生姓名: " << s.name << endl
		 << "学生年龄: " << s.age << endl
		 << "学生成绩: " << s.score << endl;



	system("pause");
	return 0;
}
