#include<iostream>
#include"mytriangle.h"
#include<cmath>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	is_valid(a, b, c);//判断是否能构成三角形
	if(is_valid(a, b, c)==1)
	{
		cout << "该三角形的面积为：" << _area(a, b, c) << endl;
	}
	else {
		cout << "错误" << endl;
	}


}
