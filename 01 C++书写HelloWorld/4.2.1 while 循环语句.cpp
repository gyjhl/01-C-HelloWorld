#include<iostream>
#include<string>
#include<ctime>
using namespace std;
/*
int main() {
	
	//whlie循环语句
	//在屏幕中打印0~9这10个数字
	int num = 0;

	//while()中填入循环条件
	//注意事项, 一定要注意不要进入死循环
	while (num < 10)
	{
		cout << num << endl;
		num++;
	}
	

	//添加随机数种子, 利用当前系统时间生成随机数, 防止每次随机数都一样
	srand((unsigned int)time(NULL));

	//while 案例练习
	//1, 系统生成随机数
	int num = rand() % 100 + 1;//生成0-99的随机数
	//cout << num << endl;
	
	//2, 玩家进行猜测
	int val = 0; //玩家输入的数据

	while (1)
	{
		cin >> val;
		//3, 判断玩家的猜测

		//猜错, 提示猜错的结果 过大或者过小 重新返回第2步
		if (val > num)
		{
			cout << "猜测过大" << endl;
		}
		else if (val < num)
		{
			cout << "猜测过小" << endl;
		}
		else
		{
			cout << "恭喜您猜对了" << endl;
			//猜对, 退出游戏
			break; //可以利用该关键字退出当前循环
		}
	}

	system("pause");
	return 0;

}
*/