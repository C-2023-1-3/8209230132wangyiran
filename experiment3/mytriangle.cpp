#include<iostream>
#include<cmath>
using namespace std;

bool is_valid(double side1, double side2, double side3)//确保三边能构成三角形
{
	if(side1+side2>side3&&side2+side3>side1&&side1+side3>side2)
	{
		return true;
	}
	else {
		return false;
	}

}
double _area(double side1, double side2, double side3)//计算三角形面积
{
	double s = (side1 + side2 + side3) / 2;
	double S= sqrt(s*(s - side1)*(s - side2)*(s - side3));
		return S;//返回值与函数类型一致
}