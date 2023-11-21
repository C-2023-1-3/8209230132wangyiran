#include<iostream>
using namespace std;
extern int T3();
extern int T4();
extern int T6();
extern int T7();
extern int T8();
extern int T9();

int main()
{
	char c;
	cout << "输入一个字母";
	cin >> c;
	if (c >= 97 && c <= 122)
	{

		c -= 32;
		cout << c << endl;
	}
	else {

		cout << static_cast<int>(c) << endl;//转为int型输出ASCII码
	}


	T3();
	T4();
	T6();
	T7();
	T8();
	T9();

	return 0;
}