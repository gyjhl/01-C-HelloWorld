#include<iostream>
#include<string>
#include<ctime>
using namespace std;
/*

int main() {

	
	//һά���������Ƶ���;

	//1, ����ͳ�������������ڴ��еĳ���
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	cout <<"��������ռ���ڴ�ռ�Ϊ:"<< sizeof(arr) << endl;
	cout <<"ÿ��Ԫ��ռ���ڴ�ռ�Ϊ:" << sizeof(arr[0]) << endl;
	cout <<"������Ԫ�ظ���Ϊ:" << sizeof(arr)/ sizeof(arr[0]) << endl;

	//2, ���Ի�ȡ�������ڴ��е��׵�ַ
	cout << "�����׵�ַΪ:" << (int)arr << endl;
	cout <<"�����һ��Ԫ�صĵ�ַַΪ:" << (int)&arr[0]<< endl;
	cout <<"����ڶ���Ԫ�صĵ�ַַΪ:" << (int)&arr[1] << endl;

	//arr = 100. ��������һ������, �����Խ��и�ֵ����
	

	//һά������ϰ����
	//1, ������ֻС������ص�����

	int arr[5] = { 300,350,200,400,250 };

	//2, ���������ҵ����ֵ
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
	
	//3, ��ӡ���ֵ
	cout << "���յ�С������Ϊ:" << max << endl;
	
	

	//ʵ������Ԫ������

	//1, ��������
	int  arr[5] = { 1,3,2,5,4 };
	cout << "��������ǰ:" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}

	//2. ʵ������
	//2.1, ��¼��ʼ�±�λ��
	//2.2, ��¼�����±�λ��
	//2.3, ��ʼ�±�������±��Ԫ�ػ���
	//2.4, ��ʼλ��++, ����λ��--
	//2.5ѭ��ִ��2.1����, ֱ����ʼλ��>=����λ��

	int start = 0;//��ʼλ��
	int end = sizeof(arr) / sizeof(arr[0]) - 1; //�����±�

	while (start < end)
	{
		//ʵ��Ԫ�ػ���
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		//�±����
		start++;
		end--;

	}
	//3, ��ӡ����֮�������

	cout << "�������ú�:" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
	system("pause");
	return 0;
}
*/

