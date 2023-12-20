#include<iostream>
using namespace std;

int pic(int n)
{
	if (n == 1)
		return 1;//终止递归函数
	if(n>1)
	{
		return (pic(n - 1) + 1) * 2;//递归
	}

}
int main()
{
	cout<<"猴子第一天摘的桃子："<<pic(10);

	return 0;
}