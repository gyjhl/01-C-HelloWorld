#include<iostream>
#include<string>
#include<ctime>
using namespace std;
/*
//�ṹ��


//����һ��ѧ���Ľṹ��
struct Student
{
	string Sname;	//ѧ������
	int score;	//ѧ������
};


//����һ����ʦ�Ľṹ��
struct Teacher
{
	string Tname;	//��ʦ����
	struct Student sArray[5];
};


//����ʦ��ѧ�����Ƶĺ���
void allocateSpace(struct Teacher tArray[], int len)
{
	//������ĸ��Ϊ�����ֵĻ���ֵ
	string nameSeed = "ABCDE";
		//����ʦ��ʼ��ֵ
		for (int i = 0; i < len; i++)
		{
			tArray[i].Tname = "Teacher_";
			tArray[i].Tname += nameSeed[i]; //iѭ������һ������, ����"Teacher_"����nameSeed�еĵڼ�����ĸ

			//ͨ��ѭ����ÿ����ʦ������ѧ����ֵ
			for (int j = 0; j < 5; j++)
			{
				tArray[i].sArray[j].Sname = "Student_";
				tArray[i].sArray[j].Sname += nameSeed[j];//iѭ������һ������, ����"Student_"����nameSeed�еĵڼ�����ĸ
				int random = rand() % 61 + 40; //0-60����� + 40 = 40 - 100��һ�������
				tArray[i].sArray[j].score = random;
			}
		}
}

//��ӡ������Ϣ
void printInfo(struct Teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "��ʦ������: " << tArray[i].Tname << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\tѧ��������: " << tArray[i].sArray[j].Sname
				 << "ѧ���ĳɼ�: " << tArray[i].sArray[j].score << endl;
		}
	}
}

int main() {
	//���������
	srand((unsigned int)time(NULL));

	//1, ����3����ʦ������
	struct Teacher tArray[3];

	//2, ͨ��������3����ʦ����Ϣ��ֵ, ���Ҹ���ʦ����ѧ����Ϣ��ֵ
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);

	//3, ��ӡ������ʦ��������ѧ����Ϣ
	printInfo(tArray, len);

	system("pause");
	return 0;
}
*/