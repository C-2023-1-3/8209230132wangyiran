#include<iostream>
#include<iomanip>
using namespace std;

int T5()
{
	double C, F;
	cout << "�����뻪ʽ�¶�" << endl;
	cin >> F;

	C = (F - 32) / 1.8;

	cout << "ת��Ϊ�����¶�C=" << fixed << setprecision(2) << C << endl;

	return 0;
}