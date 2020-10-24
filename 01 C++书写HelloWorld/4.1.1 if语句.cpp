#include<iostream>
#include<string>
using namespace std;
/*
int main() {
	
	//选择结构 单行if语句

	//用户输入分数, 分数大于600, 视为考上一本大学,  在屏幕上输出
	
	//1, 用户输入分数
	int score = 0;
	cout << "请输入一个分数:" << endl;
	cin >> score;

	//2, 打印用户输入的分数
	cout << "您输入的分数为:" << score << endl;

	//3, 判断分数是否大于600, 如果大于, 那么输出
	//注意事项, if后面不要加分数, if后面加分号, 导致后面程序不经过判断都会执行

	if (score > 600)
	{
		cout << "恭喜您考上了一本大学" << endl;

	}
	
	//选择结构 多行if语句

	//用户输入分数, 分数大于600, 视为考上一本大学,  在屏幕上输出

	//1, 用户输入分数
	int score = 0;
	cout << "请输入一个分数:" << endl;
	cin >> score;

	//2, 打印用户输入的分数
	cout << "您输入的分数为:" << score << endl;

	//3, 判断分数是否大于600, 如果大于, 那么输出, 否则未打印一本
	//注意事项, if后面不要加分数, if后面加分号, 导致后面程序不经过判断都会执行

	if (score > 600)
	{
		cout << "恭喜您考上了一本大学" << endl;
	}
	else
	{
		cout << "未考上一本大学" << endl;
	}
	
	//选择结构 多条件if语句

	//用户输入分数, 分数大于600, 视为考上一本大学,  在屏幕上输出

	//1, 用户输入分数
	int score = 0;
	cout << "请输入一个分数:" << endl;
	cin >> score;

	//2, 打印用户输入的分数
	cout << "您输入的分数为:" << score << endl;

	//3, 判断分数是否大于600, 如果大于, 那么输出, 否则未打印一本
	//注意事项, if后面不要加分数, if后面加分号, 导致后面程序不经过判断都会执行

	if (score > 600)
	{
		cout << "恭喜您考上了一本大学" << endl;
	}
	else if(score >500)
	{
		cout << "恭喜您考上二本大学" << endl;
	}
	else if(score > 400)
	{
		cout << "恭喜您考上三本大学" << endl;
	}
	else
	{
		cout << "没考上" << endl;
	}
	

	//选择结构 嵌套if语句

	//用户输入分数, 分数大于600, 视为考上一本大学,  在屏幕上输出

	//1, 用户输入分数
	int score = 0;
	cout << "请输入一个分数:" << endl;
	cin >> score;

	//2, 打印用户输入的分数
	cout << "您输入的分数为:" << score << endl;

	//3, 判断分数是否大于600, 如果大于, 那么输出, 否则未打印一本
	//注意事项, if后面不要加分数, if后面加分号, 导致后面程序不经过判断都会执行

	if (score > 600)
	{
		cout << "恭喜您考上了一本大学" << endl;
		if (score > 700)
		{
			cout << "您能考上北京大学" << endl;
		}
		else if(score > 650)
		{
			cout << "您能考上清华大学" << endl;
		}
		else
		{
			cout << "您能考上人民大学" << endl;
		}
	}
	else if (score > 500)
	{
		cout << "恭喜您考上二本大学" << endl;
	}
	else if (score > 400)
	{
		cout << "恭喜您考上三本大学" << endl;
	}
	else
	{
		cout << "没考上" << endl;
	}
	
	
	//1, 三只小猪体重, 判断哪只最重
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	//2, 让用户输入三只小猪的重量
	cout << "请输入小猪A的体重" << endl;
	cin >> num1;

	cout << "请输入小猪B的体重" << endl;
	cin >> num2;

	cout << "请输入小猪C的体重" << endl;
	cin >> num3;

	cout << "小猪A的体重为" << num1 << endl;
	cout << "小猪B的体重为" << num2 << endl;
	cout << "小猪C的体重为" << num3 << endl;

	//3, 判断哪只最重
	//先判断A和B的重量
	if (num1 > num2)  //A比B重
	{
		if (num1 > num3) //A比C重
		{
			cout << "小猪A最重" << endl;
		}
		else //C比A重
		{
			cout << "小猪C最重" << endl;
		}
	}
	else  //B比A重
	{
		if (num2 > num3) //B比C重
		{
			cout << "小猪B最重" << endl;
		}
		else //C比B重
		{
			cout << "小猪C最重" << endl;
		}
	}
	

	system("pause");
	return 0;

}
*/