#include<iostream>
#include<iomanip>
using namespace std;

int T5()
{
	double C, F;
	cout << "请输入华式温度" << endl;
	cin >> F;

	C = (F - 32) / 1.8;

	cout << "转化为摄氏温度C=" << fixed << setprecision(2) << C << endl;

	return 0;
}