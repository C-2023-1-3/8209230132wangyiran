#include<iostream>
#include"mytriangle.h"
#include<cmath>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	is_valid(a, b, c);//�ж��Ƿ��ܹ���������
	if(is_valid(a, b, c)==1)
	{
		cout << "�������ε����Ϊ��" << _area(a, b, c) << endl;
	}
	else {
		cout << "����" << endl;
	}


}
