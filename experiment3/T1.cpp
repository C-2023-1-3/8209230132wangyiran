#include<iostream>
using namespace std;
int yueshu(int x, int y)
{
	int i;
	if(x<y)//确保x>y
	{
		int m = x;
		x = y;
		y = m;
	}
	i = x % y;
	while (i != 0)//求最大公约数
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
	cout << "请输入两个自然数：" << endl;
	cin >> a >> b ;
	cout << "这两个数的最大公约数为：" << yueshu(a, b) << endl;
	int beishu = a * b / (yueshu(a, b));
	cout << "这两个数的最小公倍数为：" << beishu << endl;

	return 0;
}