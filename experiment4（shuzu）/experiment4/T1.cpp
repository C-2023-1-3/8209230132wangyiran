#include<iostream>
using namespace std;

int main()
{
	int arr[10];
	cout << "请输入数组";
	for (int i = 0; i < 10; i++)//输入数组元素
	{
		cin >> arr[i];
	}
	cout << arr[0]<<"  ";
	for (int i = 1; i < 10; i++)
	{
		for (int j = 0; j < i;j++ )
		{
			if (arr[j] != arr[i])
			{
				if (j < i - 1)
					continue;
				else {
					cout << arr[i]<<"  ";
				}
			}
			else {
				break;
			}
		}
	}
	return 0;
}