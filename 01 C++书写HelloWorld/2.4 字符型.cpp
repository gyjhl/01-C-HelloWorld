#include<iostream>
using namespace std;

int main2_4() {

	//1,�ַ��ͱ���������ʽ
	char ch = 'a';
	cout << ch << endl;
	//2,�ַ��ͱ�����ռ�ڴ��С
	cout << "char��ռ�õ��ڴ�ռ�Ϊ " << sizeof(char) << endl;
	
	//3,�ַ��ͱ�����������
	//char = ch2 = "b";//�����ַ��ͱ�����ʱ��Ҫ�õ�����
	//char = ch2 = 'abcdef'; //�����ַ��ͱ���ʱ��, ��������ֻ����һ���ַ�

	//4,�ַ��ͱ�����Ӧ��ASCII����
	//a-97
	//A-65
	cout << (int)ch << endl;
	
	system("pause");

	return 0;

}