#include<iostream>
using namespace std;

int main()
{
	void sort1(int s[], int size1);
	int size;
	cout << "���������鳤�ȣ�";
	cin >> size;
	int* arr = new int[size];
	cout << "����������Ԫ�أ�";
	for (int i = 0; i < size; i++)
		cin >> arr[i];
	int m;
	cout << "����鿴����ĵڼ�����";
	cin >> m;
	cout << "arr[" << m << "]=" << *(arr + m - 1) << endl;
	sort1(arr,size);
	cout << "����������Ϊ��";
	for (int i = 0; i < size; i++)
		cout << arr[i]<<"  ";
	delete []arr;

	return 0;
}
void sort1(int s[], int size1)
{
	for (int i = 0; i < size1 - 1; i++)
	{
		for (int j = 0; j < size1 - i - 1; j++)
		{
			if (s[j] > s[j + 1])
			{
				int a = s[j];
				s[j] = s[j + 1];
				s[j + 1] = a;
			}
		}
	}
}