#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main()
{
	int parseHex(const char* const hexString);
	char s1[100];
	cout << "������һ���ַ�����" ;
	cin.getline(s1, 100);
	cout <<"��Ϊʮ���Ƶ�����Ϊ��" << parseHex(s1);
	return 0;
}
int parseHex(const char* const hexString)
{
	int a=0;
	int b=0;
	int size = strlen(hexString);
	for (int i = 0; i < size; i++)
	{
		if (hexString[i] >= 'A' && hexString[i] <='F')
		{
			 a = (hexString[i] - 55) * (pow(16, size - i - 1));
		}
		else
		{
			 a = (hexString[i] - 48) * (pow(16, size- i - 1));
		}
		
		b += a;

	}
	return b;

}
