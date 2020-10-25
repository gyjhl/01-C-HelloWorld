#include<iostream>
#include<string>
#include<ctime>
using namespace std;
/*
//结构体中const的使用场景

//定义一个学生的结构体
struct student
{
	string name;	//成员姓名
	int age;	//成员年龄
	int score;	//成员分数
};

//将函数中的形参, 改为指针, 可以减少内存空间, 而且不会复制新的副本出来
void printStudents(const student *s)
{
	//提示一个错误, 形参前面加入了const之后, 无法更改形参, 一旦有修改的操作就报错, 可以防止误操作
	//s->age = 150;
	cout << "姓名: " << s->name << " 年龄: " << s->age << "成绩: " << s->score << endl;
}

int main() {

	//创建结构体变量
	struct student s = { "张三", 15, 70 };

	//通过函数打印结构体信息
	printStudents(&s);

	cout << "main中张三的年龄: " << s.age << endl;

	system("pause");
	return 0;
}
*/