#include<iostream>
#include<iomanip>
using namespace std;



int T6()
{
	int a, b, c;
	cout << "����������a��ֵ��" << endl;
	cin >> a;
	cout << "����������b��ֵ��" << endl;
	cin >> b;


	int m = a > b ? a : b;
	int n = a < b ? a : b;
	a = m; b = n;//����aʼ�մ���b

	//����С������

	int i = 1;
	int t;
	for (; (t = b * i) % a != 0;)
		i++;
	cout << "��С������Ϊ��" << t << endl;

	//����С��Լ��
	while ((c = a % b) != 0)//cΪ����
	{
		a = b;
		b = c;
	}
	cout << "���Լ��Ϊ��" << b << endl;


	return 0;
}