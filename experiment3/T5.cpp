#include<iostream>
using namespace std;

int pic(int n)
{
	if (n == 1)
		return 1;//��ֹ�ݹ麯��
	if(n>1)
	{
		return (pic(n - 1) + 1) * 2;//�ݹ�
	}

}
int main()
{
	cout<<"���ӵ�һ��ժ�����ӣ�"<<pic(10);

	return 0;
}