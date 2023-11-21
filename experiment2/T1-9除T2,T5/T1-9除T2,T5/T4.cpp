#include<iostream>
#include<iomanip>
using namespace std;


int T4()
{
	double a, b;
	char c;//c为字符型
	cout << "请输入运算的式子：";
	cin >> a >> c >> b;
	switch (c)
	{
	case '+':cout << "运算结果为" << a + b << endl;
		break;
	case'-':cout << "运算结果为" << a - b << endl;
		break;
	case'*':cout << "运算结果为" << a * b << endl;
		break;
	case'/':if (b == 0) { cout << "该计算无意义" << endl; }//除数为0的情况
		   else { cout << "运算结果为" << a / b << endl; }
		   break;
	default:cout << "运算符非法" << endl;

	}
	return 0;
}