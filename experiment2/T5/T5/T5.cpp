#include<iostream>
#include<iomanip>
#include <stdio.h>
using namespace std;

int main()
{
	char c;//cΪ�ַ��ͣ��ʺ���ıȽ϶������''
	int a = 0, b = 0, d = 0, e = 0;
	while ((c = getchar()) != '\n')
	{
		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')//ͳ����ĸ����
		{
			a++;
		}
		else if (c >= '0' && c <= '9')//ͳ�����ָ���
		{
			b++;
		}
		else if (c == ' ')//ͳ�ƿո����
		{
			d++;
		}
		else//ͳ�������ַ�����
		{
			e++;
		}
	}
	cout << "��ĸ����" << a << endl;
	cout << "���ָ�����" << b << endl;
	cout << "�ո������" << d << endl;
	cout << "�����ַ�����" << e << endl;
	return 0;


}
