#include<iostream>
using namespace std;

int T9()
{
	double a = 0.8;//苹果单价
	double sum = 0;
	double t;
	for (int n = 2; n <= 100; n = n * 2)
	{

		sum += n;
		//总价
		t = sum * a;
	}
	//n<100时进行了6次循环
	cout << "每天平均花的钱为：" << t / 6 << endl;


	return 0;

}