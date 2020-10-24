#include<iostream>
#include<string>
#include<ctime>
using namespace std;
/*
//结构体嵌套结构体

//定义一个学生的结构体
struct student
{
	string name;	//成员姓名
	int age;	//成员年龄
	int score;	//成员分数
};

//定义一个老师结构体
struct teacher
{
	int id; //教师编号
	string name; //教师姓名
	int age; //年龄
	struct student stu; //辅导的学生
};



int main() {

	//结构体嵌套结构体
	//创建老师
	struct teacher t;
	t.id = 10000;
	t.name = "老王";
	t.age = 50;
	t.stu.name = "小王";
	t.stu.age = 20;
	t.stu.score = 60;

	cout << "老师姓名: " << t.name << endl
		 << "老师编号: " << t.id << endl
		 << "老师年龄: " << t.age << endl
		 << "老师辅导的学生姓名: " << t.stu.name << endl
		 << "老师辅导的学生年龄: " << t.stu.age << endl
		 << "老师辅导的学生的考试分数: " << t.stu.score << endl;

	system("pause");
	return 0;
}
*/