#include<iostream>
#include<string>
#include<ctime>
using namespace std;
/*
//�ṹ����const��ʹ�ó���

//����һ��ѧ���Ľṹ��
struct student
{
	string name;	//��Ա����
	int age;	//��Ա����
	int score;	//��Ա����
};

//�������е��β�, ��Ϊָ��, ���Լ����ڴ�ռ�, ���Ҳ��Ḵ���µĸ�������
void printStudents(const student *s)
{
	//��ʾһ������, �β�ǰ�������const֮��, �޷������β�, һ�����޸ĵĲ����ͱ���, ���Է�ֹ�����
	//s->age = 150;
	cout << "����: " << s->name << " ����: " << s->age << "�ɼ�: " << s->score << endl;
}

int main() {

	//�����ṹ�����
	struct student s = { "����", 15, 70 };

	//ͨ��������ӡ�ṹ����Ϣ
	printStudents(&s);

	cout << "main������������: " << s.age << endl;

	system("pause");
	return 0;
}
*/