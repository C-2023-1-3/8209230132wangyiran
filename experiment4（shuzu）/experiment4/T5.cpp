#include<iostream>
#include<string>
using namespace std;

int main()
{
	int indexOf(const char s1[], const char s2[]);
	const int size = 999;
	char s1[size], s2[size];
	cout << "请输入一个字符串s1:";
	cin.getline(s1, 1000);
	cout << "请输入一个字符串s2:";
	cin.getline(s2, 1000);
	cout << indexOf(s1, s2);
	return 0;

}
int indexOf(const char s1[], const char s2[])
{
	int a = -1;
	int size1 = strlen(s1);
	int size2 = strlen(s2);

	if (size1 > size2)//长度大于第二个则肯定不可能为子串
	{
		return -1;
	}
	for (int i = 0; i < size2 - size1 + 1; i++)
	{
		for (int j = 0; j < size1; j++)
		{
			if (s1[j] == s2[i + j] && j == size1 - 1)
			{
				a = i;
			}
			if (s1[j] != s2[j + i])
			{
				break;
			}
		}
	}
	if (a >= 0)
	{
		return a;
	}
	else//若a仍小于0，则证明for循环中没有a被重新赋值
	{
		return -1;
	}
}