#include<iostream>
using namespace std;

int T7() {
	for (int n = 1; n <= 5; n++)//保证输出5行
	{
		for (int i = 1; i <= n; i++)//保证第n行有n个*
		{
			cout << "*";

		}
		cout << endl;
	}

	return 0;
}