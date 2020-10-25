#include<iostream>
#include<string>
#include<ctime>
using namespace std;
/*
//结构体


//定义一个学生的结构体
struct Student
{
	string Sname;	//学生姓名
	int score;	//学生分数
};


//定义一个老师的结构体
struct Teacher
{
	string Tname;	//老师姓名
	struct Student sArray[5];
};


//给老师和学生复制的函数
void allocateSpace(struct Teacher tArray[], int len)
{
	//先拿字母作为起名字的基础值
	string nameSeed = "ABCDE";
		//给老师开始赋值
		for (int i = 0; i < len; i++)
		{
			tArray[i].Tname = "Teacher_";
			tArray[i].Tname += nameSeed[i]; //i循环到哪一个数字, 就让"Teacher_"加上nameSeed中的第几个字母

			//通过循环给每名老师所带的学生赋值
			for (int j = 0; j < 5; j++)
			{
				tArray[i].sArray[j].Sname = "Student_";
				tArray[i].sArray[j].Sname += nameSeed[j];//i循环到哪一个数字, 就让"Student_"加上nameSeed中的第几个字母
				int random = rand() % 61 + 40; //0-60随机数 + 40 = 40 - 100的一个随机数
				tArray[i].sArray[j].score = random;
			}
		}
}

//打印所有信息
void printInfo(struct Teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "老师的姓名: " << tArray[i].Tname << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t学生的姓名: " << tArray[i].sArray[j].Sname
				 << "学生的成绩: " << tArray[i].sArray[j].score << endl;
		}
	}
}

int main() {
	//随机数种子
	srand((unsigned int)time(NULL));

	//1, 创建3名老师的数组
	struct Teacher tArray[3];

	//2, 通过函数给3名老师的信息赋值, 并且给老师带的学生信息赋值
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);

	//3, 打印所有老师及所带的学生信息
	printInfo(tArray, len);

	system("pause");
	return 0;
}
*/