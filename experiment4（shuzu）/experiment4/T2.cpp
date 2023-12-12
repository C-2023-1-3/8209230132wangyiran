#include<iostream>
using namespace std;


int sort(double list[10])
{ 
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j <9; j++)
		{
			if (list[j] > list[j + 1])
			{
				double a = list[j];
				list[j] = list[j + 1];
				list[j + 1] = a;
				changed = true;
			}
			
		}
	} while (changed==true);
	return 0;
  }

int main() {
	double arr[10];
	cout << "请输入十个双精度的数字";
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	sort(arr);
	for (int k = 0; k < 10; k++) {
		cout << arr[k]<<"  ";
	}

	return 0;
}