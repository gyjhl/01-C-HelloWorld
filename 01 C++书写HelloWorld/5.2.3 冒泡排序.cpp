#include<iostream>
#include<string>
#include<ctime>
using namespace std;
/*
int main() {


	//利用冒泡排序来实现升序排列
	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	cout << "排序前: " << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	//开始冒泡排序
	//总排序总轮数 = 元素 - 1;
	for (int i = 0; i < 9 - 1; i++)
	{
		//内层循环对比: 每轮对比次数 = 元素个数 - 排序轮数 - 1;
		for (int j = 0; j < 9 - i - 1; j++)
		{
			//如果第一个数字比第二个数字大, 交换2个数字
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			
		}
	}

	//排序后结果
	cout << "排序后: " << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}


*/