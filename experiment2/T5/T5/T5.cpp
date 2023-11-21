#include<iostream>
#include<iomanip>
#include <stdio.h>
using namespace std;

int main()
{
	char c;//c为字符型，故后面的比较都需打上''
	int a = 0, b = 0, d = 0, e = 0;
	while ((c = getchar()) != '\n')
	{
		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')//统计字母个数
		{
			a++;
		}
		else if (c >= '0' && c <= '9')//统计数字个数
		{
			b++;
		}
		else if (c == ' ')//统计空格个数
		{
			d++;
		}
		else//统计其他字符个数
		{
			e++;
		}
	}
	cout << "字母个数" << a << endl;
	cout << "数字个数：" << b << endl;
	cout << "空格个数：" << d << endl;
	cout << "其他字符个数" << e << endl;
	return 0;


}
