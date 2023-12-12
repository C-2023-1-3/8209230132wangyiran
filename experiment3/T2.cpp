#include<iostream>
using namespace std;

bool is_prime(int num);//函数声明
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
		if (a % 10 == 0)//实现换行
		{
			cout << endl;
		}
	}
	
	return 0;
}
bool is_prime(int num)
{
	if (num < 2)//特殊情况1，2
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
				return false;//如果不是素数则提前跳出循环
				break;
			}
		}
		if (i * i > num)//正常跳出循环，为素数
		{
			return true;
		}

	}
}