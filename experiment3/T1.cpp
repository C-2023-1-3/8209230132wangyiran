#include<iostream>
using namespace std;
int yueshu(int x, int y)
{
	int i;
	if(x<y)//ȷ��x>y
	{
		int m = x;
		x = y;
		y = m;
	}
	i = x % y;
	while (i != 0)//�����Լ��
	{
		x = y;
		y = i;
		i = x % y;
	}
	return y;
}
int main() 
{ 
	int a;
	int b;
	cout << "������������Ȼ����" << endl;
	cin >> a >> b ;
	cout << "�������������Լ��Ϊ��" << yueshu(a, b) << endl;
	int beishu = a * b / (yueshu(a, b));
	cout << "������������С������Ϊ��" << beishu << endl;

	return 0;
}