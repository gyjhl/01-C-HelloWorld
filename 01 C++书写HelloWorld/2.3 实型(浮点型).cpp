#include<iostream>
using namespace std;

int main2_3() {
	//1, ������, float
	//2, ˫����, double

	//С������治��fĬ����double����
	//float f1 = 3.14;
	//С�������fĬ����float����

	//Ĭ�������, ���һ��С������ʾ��6λ��Ч����(��C++��, ��ʾ����С����Ҫ���ӵ�����)

	float f1 = 3.1415926f;

	double d1 = 3.1415926;

	cout << "f1 = " << f1 << endl;

	cout << "d1 = " << d1 << endl;

	//ͳ��float��double��ռ���ڴ�ռ�

	//floatռ4���ֽ�
	cout << "float��ռ�õ��ڴ�ռ�Ϊ " << sizeof(float) << endl;
	//doubleռ8���ֽ�
	cout << "double��ռ�õ��ڴ�ռ�Ϊ " << sizeof(double) << endl;

	//��ѧ������
	float f2 = 3e2; //3*10^2
	cout << "f2 = " << f2 << endl;

	float f3 = 3e-2; //3*0.1^2
	cout << "f3 = " << f3 << endl;

	system("pause");

	return 0;

}