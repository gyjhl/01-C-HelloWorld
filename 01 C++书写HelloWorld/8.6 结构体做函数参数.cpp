#include<iostream>
#include<string>
#include<ctime>
using namespace std;

//�ṹ������������

//���ݷ�ʽ������:

//1, ֵ����

//2, ��ַ����

//����һ��ѧ���Ľṹ��
struct student
{
	string name;	//��Ա����
	int age;	//��Ա����
	int score;	//��Ա����
};

//1,  ֵ����
void printStudent1(struct student s)
{
	s.age = 100;
	cout << "�Ӻ����д�ӡ " << endl
	 << "ѧ������: " << s.name << endl
	 << "ѧ������: " << s.age << endl
	 << "ѧ���ɼ�: " << s.score << endl;
}

//1,  ��ַ����
void printStudent2(struct student * p)
{
	p->age = 200;
	cout << "�Ӻ���2�д�ӡ " << endl
		 << "ѧ������: " << p->name << endl
		 << "ѧ������: " << p->age << endl
		 << "ѧ���ɼ�: " << p->score << endl;
}

int main() {

	//�ṹ��������
	//��ѧ�����뵽һ��������,��ӡѧ�����ϵ�������Ϣ

	//�����ṹ�����
	struct student s;
	s.name = "����";
	s.age = 20;
	s.score = 85;

	printStudent1(s);
	printStudent2(&s);

	cout << "main�����д�ӡ " << endl
		 << "ѧ������: " << s.name << endl
		 << "ѧ������: " << s.age << endl
		 << "ѧ���ɼ�: " << s.score << endl;



	system("pause");
	return 0;
}
