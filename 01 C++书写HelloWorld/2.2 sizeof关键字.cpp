#include<iostream>
using namespace std;

int main2_22() {
	//����
	//1, shrot������(2���ֽ�)
	//2, int����(4���ֽ�)
	//3, long������(4���ֽ�)
	//4, long long��������(8���ֽ�)
	//��������sizeof�����������ռ���ڴ��С
	//�﷨: sizeof(��������/����)
	
	short num1 = 10;
	int num2 = 10;
	long num3 = 10;
	long long num4 = 10;

	cout << "shortռ�õ����ݿռ�Ϊ " << sizeof(short) << endl;
	cout << "num1ռ�õ����ݿռ�Ϊ " << sizeof(num1) << endl;
	cout << "intռ�õ����ݿռ�Ϊ " << sizeof(int) << endl;
	cout << "num2ռ�õ����ݿռ�Ϊ " << sizeof(num2) << endl;
	cout << "longռ�õ����ݿռ�Ϊ " << sizeof(long) << endl;
	cout << "num3ռ�õ����ݿռ�Ϊ " << sizeof(num3) << endl;
	cout << "long longռ�õ����ݿռ�Ϊ " << sizeof(long long) << endl;
	cout << "num4ռ�õ����ݿռ�Ϊ " << sizeof(num4) << endl;

	//���ʹ�С�Ƚ�
	//short < int < = long <= long long

	system("pause");

	return 0;

}