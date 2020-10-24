#include<iostream>
#include<string>
#include<ctime>
using namespace std;
/*

int main() {

	
	//一维数组组名称的用途

	//1, 可以统计整个数组在内存中的长度
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	cout <<"整个数组占用内存空间为:"<< sizeof(arr) << endl;
	cout <<"每个元素占用内存空间为:" << sizeof(arr[0]) << endl;
	cout <<"数组中元素个数为:" << sizeof(arr)/ sizeof(arr[0]) << endl;

	//2, 可以获取数组在内存中的首地址
	cout << "数组首地址为:" << (int)arr << endl;
	cout <<"数组第一个元素的地址址为:" << (int)&arr[0]<< endl;
	cout <<"数组第二个元素的地址址为:" << (int)&arr[1] << endl;

	//arr = 100. 数组名是一个常量, 不可以进行赋值操作
	

	//一维数组练习案例
	//1, 创建五只小猪的体重的数组

	int arr[5] = { 300,350,200,400,250 };

	//2, 从数组中找到最大值
	int max = 0;
	for (int i = 0; i < 5; i++)
	{
		max < arr[i] ? max = arr[i] : max = max;
	}
	
	int max = 0;
	for (int i = 0; i < 5; i++)
	{
		//cout << arr[i] << endl;
		if (arr[i] > max)
		{
			max = arr[i];
			
		}
	}
	
	//3, 打印最大值
	cout << "最终的小猪体重为:" << max << endl;
	
	

	//实现数组元素逆置

	//1, 创建数组
	int  arr[5] = { 1,3,2,5,4 };
	cout << "数组逆置前:" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}

	//2. 实现逆置
	//2.1, 记录起始下标位置
	//2.2, 记录结束下标位置
	//2.3, 起始下标与结束下标的元素互换
	//2.4, 起始位置++, 结束位置--
	//2.5循环执行2.1操作, 直到起始位置>=结束位置

	int start = 0;//起始位置
	int end = sizeof(arr) / sizeof(arr[0]) - 1; //结束下标

	while (start < end)
	{
		//实现元素互换
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		//下标更新
		start++;
		end--;

	}
	//3, 打印逆置之后的数组

	cout << "数组逆置后:" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
	system("pause");
	return 0;
}
*/

