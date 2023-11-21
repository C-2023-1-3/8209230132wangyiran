#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double x, y;
	for (int i = 1; i <= 4; i++)
	{
		cout << "请输入x的值";
		cin >> x;

		if (x > 0 && x < 5)
			if (x < 1)
			{
				y = 3 - 2 * x;
			}
			else { y = 2 / (4 * x) + 1; }
		else
		{
			if (x < 10)
				y = x * x;
		}

		cout << "y的值为：" << y << endl;

	}
	return 0;
}
