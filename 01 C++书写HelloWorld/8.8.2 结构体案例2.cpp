#include<iostream>
#include<string>
#include<ctime>
using namespace std;

//�ṹ�尸��2

//1, ���Ӣ�۽ṹ��
struct Hero
{
	//����
	string name;
	//����
	int age;
	//�Ա�
	string sex;
};

//ð������ ʵ��������������
void bubbleSort(struct Hero heroArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		for(int j = 0; j < len -i-1;j++)
			//���j�±��Ԫ�ص��������j+1�±��Ԫ������, ��������Ԫ��
			if (heroArray[j].age > heroArray[j + 1].age)
			{
				struct Hero temp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = temp;
			}
	}

}

//��ӡ����������е���Ϣ
void printHero(struct Hero heroArray[], int len)
{
	for (int i = 0; i < 5; i++)
	{
		cout << "����: " << heroArray[i].name << " ����: " << heroArray[i].age << " �Ա�: " << heroArray[i].sex << endl;
	}

}

int main() {

	//2, ����һ��������5��Ӣ��
	struct Hero heroArray[5] =
	{
		{"����" ,23, "��"},
		{"����" ,22, "��"},
		{"�ŷ�" ,20, "��"},
		{"����" ,21, "��"},
		{"����" ,19, "Ů"},
	};

	cout << " ����ǰ�Ĵ�ӡ���: " << endl;
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	for (int i = 0; i < 5; i++)
	{
		cout << "����: " << heroArray[i].name << " ����: " << heroArray[i].age << " �Ա�: " << heroArray[i].sex << endl;
	}

	//3. �������������, �������������������
	bubbleSort(heroArray, len);

	//4, �������Ľ����ӡ���
	cout << " �����Ĵ�ӡ���: " << endl;

	printHero(heroArray, len);

	system("pause");
	return 0;
}
