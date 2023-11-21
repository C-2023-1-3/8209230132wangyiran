#include<iostream>
using namespace std;

int T3()
{
	int a, b, d;
	cout << "请输出三角形的三条边长度" << endl;//输入三条边长度
	cin >> a;
	cin >> b;
	cin >> d;
	if (a + b > d && a + d > b && b + d > a) {
		double L = a + b + d;
		cout << "三角形的周长为" << L << endl;
		if (a == b || b == d || a == d)
		{
			cout << "该三角形为等腰三角形" << endl;
		}
		else {
			cout << "该三角形不是等腰三角形" << endl;
		}
	}
	else {
		cout << "该三边不能构成三角形" << endl;
	}
	return 0;
}