#include<iostream>
using namespace std;

int T9()
{
	double a = 0.8;//ƻ������
	double sum = 0;
	double t;
	for (int n = 2; n <= 100; n = n * 2)
	{

		sum += n;
		//�ܼ�
		t = sum * a;
	}
	//n<100ʱ������6��ѭ��
	cout << "ÿ��ƽ������ǮΪ��" << t / 6 << endl;


	return 0;

}