#include<iostream>
#include<iomanip>
using namespace std;


int T4()
{
	double a, b;
	char c;//cΪ�ַ���
	cout << "�����������ʽ�ӣ�";
	cin >> a >> c >> b;
	switch (c)
	{
	case '+':cout << "������Ϊ" << a + b << endl;
		break;
	case'-':cout << "������Ϊ" << a - b << endl;
		break;
	case'*':cout << "������Ϊ" << a * b << endl;
		break;
	case'/':if (b == 0) { cout << "�ü���������" << endl; }//����Ϊ0�����
		   else { cout << "������Ϊ" << a / b << endl; }
		   break;
	default:cout << "������Ƿ�" << endl;

	}
	return 0;
}