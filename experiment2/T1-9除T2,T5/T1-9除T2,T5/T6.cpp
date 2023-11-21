#include<iostream>
#include<iomanip>
using namespace std;



int T6()
{
	int a, b, c;
	cout << "输入正整数a的值：" << endl;
	cin >> a;
	cout << "输入正整数b的值：" << endl;
	cin >> b;


	int m = a > b ? a : b;
	int n = a < b ? a : b;
	a = m; b = n;//保障a始终大于b

	//求最小公倍数

	int i = 1;
	int t;
	for (; (t = b * i) % a != 0;)
		i++;
	cout << "最小公倍数为：" << t << endl;

	//求最小公约数
	while ((c = a % b) != 0)//c为余数
	{
		a = b;
		b = c;
	}
	cout << "最大公约数为：" << b << endl;


	return 0;
}