#include<iostream>
using namespace std;

void merge(const int list1[], int size1, const int list2[], int size2, int list3[]);

int main()
{
	int size1;//size1Ϊlist1�ĳ���
	cout << "Enter size1:";
	cin >> size1;
	int* list1 = new int[size1];
	cout << "Enter list1:";
	for (int i = 0; i < size1; i++)
	{
		cin >> list1[i];
	}
	int size2;//size2Ϊlist2�ĳ���
	cout << "Enter size2:";
	cin >> size2;
	int* list2 = new int[size2];
	cout << "Enter list2:";
	for (int i = 0; i < size2; i++)
	{
		cin >> list2[i];
	}
	int* list3 = new int[size1 + size2];
	merge(list1, size1, list2, size2, list3);

	return 0;
}
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	for (int i = 0; i < size1; i++)//�ϲ���������
	{
		list3[i] = list1[i];
	}
	for (int i = 0; i < size2; i++)
		list3[i + size1] = list2[i];
	for (int i = 0; i < size1 + size2 - 1; i++)//����
	{
		for (int j = 0; j < (size1 + size2 - 1 - i); j++)
		{
			if (list3[j] > list3[j + 1])
			{
				int a = list3[j];
				list3[j] = list3[j + 1];
				list3[j + 1] = a;
			}
		}
	}
	for (int i = 0; i < (size1 + size2); i++)//����ϲ��������
	{
		cout << list3[i] << "  ";
	}

}
