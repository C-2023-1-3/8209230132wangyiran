#include<iostream>
#include<iomanip>
using namespace std;

int T8() {
	double a, b, c;
	cout << "������a��ֵ��";
	cin >> a;
	if (a < 0)
	{
		cout << "aû��ƽ����" << endl;
	}
	else {
		b = a;
		c = (b + 1) / 2;
		while (fabs(b - c) >= 10e-5)//���þ���ֵ����
		{
			b = c;
			c = (b + a / b) / 2;

		}
		cout << "a��ƽ����Ϊ��" << c << endl;
	}


	return 0;
}