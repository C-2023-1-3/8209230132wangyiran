#include<iostream>
using namespace std;

int T3()
{
	int a, b, d;
	cout << "����������ε������߳���" << endl;//���������߳���
	cin >> a;
	cin >> b;
	cin >> d;
	if (a + b > d && a + d > b && b + d > a) {
		double L = a + b + d;
		cout << "�����ε��ܳ�Ϊ" << L << endl;
		if (a == b || b == d || a == d)
		{
			cout << "��������Ϊ����������" << endl;
		}
		else {
			cout << "�������β��ǵ���������" << endl;
		}
	}
	else {
		cout << "�����߲��ܹ���������" << endl;
	}
	return 0;
}