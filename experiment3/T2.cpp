#include<iostream>
using namespace std;

bool is_prime(int num);//��������
int main()
{
	int a = 0;
	for (int m = 1; a < 200; m++)
	{
		if (is_prime(m) == 1)
		{
			a++;
			cout << m << " ";
		}
		if (a % 10 == 0)//ʵ�ֻ���
		{
			cout << endl;
		}
	}
	
	return 0;
}
bool is_prime(int num)
{
	if (num < 2)//�������1��2
	{
		return false;
	}
	else if (num == 2) {
		return true;
	}
	else {
		int i;
		for (i = 2; i * i <= num; i++)
		{
			int t = num % i;
			if (t == 0)
			{
				return false;//���������������ǰ����ѭ��
				break;
			}
		}
		if (i * i > num)//��������ѭ����Ϊ����
		{
			return true;
		}

	}
}