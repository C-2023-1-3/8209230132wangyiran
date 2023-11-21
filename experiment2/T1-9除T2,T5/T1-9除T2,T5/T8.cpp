#include<iostream>
#include<iomanip>
using namespace std;

int T8() {
	double a, b, c;
	cout << "请输入a的值：";
	cin >> a;
	if (a < 0)
	{
		cout << "a没有平方根" << endl;
	}
	else {
		b = a;
		c = (b + 1) / 2;
		while (fabs(b - c) >= 10e-5)//调用绝对值函数
		{
			b = c;
			c = (b + a / b) / 2;

		}
		cout << "a的平方根为：" << c << endl;
	}


	return 0;
}