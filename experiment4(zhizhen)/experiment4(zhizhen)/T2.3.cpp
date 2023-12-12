#include<iostream>
using namespace std;

int main()
{
	void sort1(int s[], int size1);
	int size;
	cout << "请输入数组长度：";
	cin >> size;
	int* arr = new int[size];
	cout << "请输入数组元素：";
	for (int i = 0; i < size; i++)
		cin >> arr[i];
	int m;
	cout << "你想查看数组的第几个数";
	cin >> m;
	cout << "arr[" << m << "]=" << *(arr + m - 1) << endl;
	sort1(arr,size);
	cout << "排序后该数组为：";
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